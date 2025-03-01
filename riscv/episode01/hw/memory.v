module memory (
    input                CLK,
    input      [31:0]    memory_address,      // the address to be read
    output reg [31:0]    memory_read_data,    // the data read from memory
    input                memory_read_strobe   // raised when address is valid to trigger read
);
    parameter SIZE = 256 - 1;

    reg [31:0] MEM[SIZE:0];

    `include "hw/riscv_assembler.v"
    initial begin
        LI(x1, 0);
        NOP();
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        NOP();
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        NOP();
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        LI(x1, 3);
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
        ADDI(x1, x1, 1);
    end

    always @(posedge CLK) begin
      if(memory_read_strobe) begin
         memory_read_data <= MEM[memory_address[9:2]];
      end
   end

endmodule
