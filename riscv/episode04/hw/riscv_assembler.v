integer memPC;
initial memPC = 0;

/* verilator lint_off UNUSEDPARAM */

localparam x0 = 0, x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5, x6 = 6, x7 = 7, 
           x8 = 8, x9 = 9, x10=10, x11=11, x12=12, x13=13, x14=14, x15=15,
           x16=16, x17=17, x18=18, x19=19, x20=20, x21=21, x22=22, x23=23,
           x24=24, x25=25, x26=26, x27=27, x28=28, x29=29, x30=30, x31=31;

localparam
    zero = 0,
    ra = 1,
    sp = 2,
    gp = 3,
    tp = 4,
    t0 = 5,
    t1 = 6,
    t2 = 7;


/********************
 R-Type Instructions
 ********************/

task RType;
   input [6:0] opcode;
   input [4:0] rd;   
   input [4:0] rs1;
   input [4:0] rs2;
   input [2:0] funct3;
   input [6:0] funct7;
   begin
      MEM[memPC[9:2]] = {funct7, rs2, rs1, funct3, rd, opcode};
      memPC = memPC + 4;
   end
endtask

task ADD;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b000, 7'b0000000);
endtask

task SUB;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b000, 7'b0000010);
endtask

task SLL;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b001, 7'b0000000);
endtask

task SLT;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b010, 7'b0000000);
endtask

task SLTU;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b011, 7'b0000000);
endtask

task XOR;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b100, 7'b0000000);
endtask

task SRL;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b101, 7'b0000000);
endtask

task SRA;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b101, 7'b0100000);
endtask

task OR;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b110, 7'b0000000);
endtask

task AND;
    input [4:0] rd;
    input [4:0] rs1;
    input [4:0] rs2;
    RType(7'b0110011, rd, rs1, rs2, 3'b111, 7'b0000000);
endtask

task SLLI;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm[4:0], 3'b001, 7'b0000000);
endtask

task SRLI;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm[4:0], 3'b101, 7'b0000000);
endtask

task SRAI;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm[4:0], 3'b101, 7'b0100000);
endtask

/*********************
  I-Type Instructions
 *********************/

task IType;
   input [6:0]  opcode;
   input [4:0]  rd;   
   input [4:0]  rs1;
   input [31:0] imm;
   input [2:0]  funct3;
   begin
      MEM[memPC[9:2]] = {imm[11:0], rs1, funct3, rd, opcode};
      memPC = memPC + 4;
   end
endtask

task ADDI;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm, 3'b000);
endtask

task SLTI;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm, 3'b010);
endtask

task SLTIU;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm, 3'b011);
endtask

task XORI;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm, 3'b100);
endtask

task ORI;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm, 3'b110);
endtask

task ANDI;
    input [4:0]  rd;
    input [4:0]  rs1;
    input [31:0] imm;
    IType(7'b0010011, rd, rs1, imm, 3'b111);
endtask

/*****************************
 * I-Type Pseudo Instructions
 *****************************/

 task NOP;
    ADDI(zero, zero, 0);
 endtask

 task LI;
    input [4:0]  rd;
    input [31:0] imm;
    if(imm == 0)
        ADD(rd, zero, zero);
    else if ( ( $signed(imm) >= -2048 ) && ( $signed(imm) < 2048 ) )
        ADDI(rd, zero, imm); 
    else $error("LUI is not yet implemented - cannot handle immediate values outside of [-2048, 2048)");
 endtask

 task MV;
    input [4:0] rd;
    input [4:0] rs;
    ADD(rd, rs, 0);
 endtask

/* verilator lint_on UNUSEDPARAM */
