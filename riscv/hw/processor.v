module processor
(
    input         CLK,
    input         reset,

    input  [31:0] memory_read_data,
    output [31:0] memory_address,
    output        memory_read_strobe,

    output [31:0] x1
);

    /***********
      Registers
     ***********/
    reg [31:0] register_bank [0:31];
    reg [31:0] programme_counter;
    reg [31:0] instruction;
    
    assign x1 = register_bank[1]; // expose an output so that we can see our CPU doing something.

    /*******************
      Memory Interface
     *******************/

    assign memory_address = programme_counter;
    assign memory_read_strobe = (state == k_state_fetch_instruction);

    /*********************
      Instruction Decoder
     *********************/

    localparam k_opcode_ALUreg = 7'b0110011;

    wire [6:0] opcode = instruction[6:0];
    wire isALUreg = (opcode == k_opcode_ALUreg );

    // R-Type operands

    wire [4:0] rs1Id  = instruction[19:15];
    wire [4:0] rs2Id  = instruction[24:20];
    wire [4:0] rdId   = instruction[11:7];

    wire [2:0] funct3 = instruction[14:12];
    wire [6:0] funct7 = instruction[31:25];


    /*************** 
      State Machine 
     ***************/

    localparam k_state_fetch_instruction = 2'd0;
    localparam k_state_wait_instruction  = 2'd1;
    localparam k_state_fetch_registers   = 2'd2;
    localparam k_state_execute           = 2'd3;

    reg  [31:0] rs1;
    reg  [31:0] rs2;
    reg  [1:0]  state;
    wire [31:0] write_back_data;
    wire        write_back_enable;

    // transition

    always @(posedge CLK) begin
        if(reset) begin
            programme_counter <= 0;
            state             <= k_state_fetch_instruction;
        end else begin
            if(write_back_enable && rdId != 0)
                register_bank[rdId] <= write_back_data;
            
            case(state)
                k_state_fetch_instruction: begin
                    state       <= k_state_wait_instruction;
                end
                k_state_wait_instruction: begin
                    instruction <= memory_read_data;
                    state       <= k_state_fetch_registers;
                end
                k_state_fetch_registers: begin
                    rs1   <= register_bank[rs1Id];
                    rs2   <= register_bank[rs2Id];
                    state <= k_state_execute;
                end
                k_state_execute: begin 
                    programme_counter <= programme_counter + 1;
                    state             <= k_state_fetch_instruction;
                end
                default: state <= k_state_fetch_instruction;
            endcase
        end
    end


    /***********************
      Arithmetic Logic Unit 
     ***********************/

    wire [31:0] alu_in_1 = rs1;
    wire [31:0] alu_in_2 = rs2;
    reg  [31:0] alu_out;
    
    assign write_back_enable = isALUreg && (state == k_state_execute);
    assign write_back_data = alu_out;

    always @(*) begin
        case(funct3)
            3'b000: alu_out = (funct7[5]) ? (alu_in_1 - alu_in_2) : (alu_in_1 + alu_in_2);
            default: alu_out = 32'h0;
        endcase
    end

endmodule
