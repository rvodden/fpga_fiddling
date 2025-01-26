module instruction_decoder
(
    input [31:0] instruction;    

    // Opcode flags
    output        isALUreg;
    output        isALUimm;
    output        isBranch;
    output        isJALR  ;
    output        isJAL   ;
    output        isAUIPC ;
    output        isLUI   ;
    output        isLoad  ;
    output        isStore ;
    output        isSYSTEM;

    output [4:0]  rs1Id;
    output [4:0]  rs2Id;
    output [4:0]  rdId;

    output [2:0]  funct3;
    output [6:0]  funct7;

    output [31:0] Iimm;
);

    localparam k_opcode_ALUreg = 7'b0110011;
    localparam k_opcode_ALUimm = 7'b0010011;
    localparam k_opcode_Branch = 7'b1100011;
    localparam k_opcode_JALR   = 7'b1100111; // jump and link register
    localparam k_opcode_JAL    = 7'b0110011; // jump and link immediate
    localparam k_opcode_AUIPC  = 7'b0010111; 
    localparam k_opcode_LUI    = 7'b0110111; // load upper immediate
    localparam k_opcode_LOAD   = 7'b0000011;
    localparam k_opcode_STORE  = 7'b0100011;
    localparam k_opcode_SYSTEM = 7'b1110011;

    wire [6:0] opcode;

    assign opcode <= instr[6:0];

    assign isALUreg = (opcode == k_opcode_ALUreg );
    assign isALUimm = (opcode == k_opcode_ALUimm );
    assign isBranch = (opcode == k_opcode_Branch );
    assign isJALR   = (opcode == k_opcode_JALR   );
    assign isJAL    = (opcode == k_opcode_JAL    );
    assign isAUIPC  = (opcode == k_opcode_AUIPC  );
    assign isLUI    = (opcode == k_opcode_LUI    );
    assign isLoad   = (opcode == k_opcode_LOAD   );
    assign isStore  = (opcode == k_opcode_STORE  );
    assign isSYSTEM = (opcode == k_opcode_SYSTEM );

    // R-Type operands

    assign rs1Id  = instruction[19:15];
    assign rs2Id  = instruction[24:20];
    assign rdId   = instruction[11:7];

    assign funct3 = instruction[14:12];
    assign funct7 = instruction[31:25];

    // I-Type operand

    assign Iimm   = { {21{instruction[31]}}, instruction[30:20] };
    
    // U-Type operand

    assign Uimm   = { instruction[31], instruction[30:12], {12{1'b0}} };



endmodule;
