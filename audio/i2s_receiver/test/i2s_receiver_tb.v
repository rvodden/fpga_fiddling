`timescale 1ns / 1ps

module i2s_receiver_tb;
    parameter MAX_SAMPLE_WIDTH = 24;

    reg CLK, RST;
    reg I2S_SCK, I2S_WS, I2S_SD;
    wire [MAX_SAMPLE_WIDTH-1:0] sample_out;
    wire sample_valid;
    wire sample_channel;

    // DUT
    i2s_receiver #(
        .MAX_SAMPLE_WIDTH(MAX_SAMPLE_WIDTH)
    ) dut (
        .CLK(CLK),
        .RST(RST),
        .I2S_SCK(I2S_SCK),
        .I2S_WS(I2S_WS),
        .I2S_SD(I2S_SD),
        .sample_out(sample_out),
        .sample_valid(sample_valid),
        .sample_channel(sample_channel)
    );

    // 50 MHz system clock (20 ns period)
    always #10 CLK <= ~CLK;

    // I2S bit clock: ~3.125 MHz (for simulation convenience)
    reg [7:0] sck_div = 0;
    always @(posedge CLK) begin
        if (sck_div == 7) begin
            sck_div <= 0;
            I2S_SCK <= ~I2S_SCK;
        end else begin
            sck_div <= sck_div + 1;
        end
    end

    // Test samples
    reg [MAX_SAMPLE_WIDTH-1:0] test_right = 24'h123456;
    reg [MAX_SAMPLE_WIDTH-1:0] test_left  = 24'hA1B2C3;

    integer bit_idx;

    // Stimulus
    initial begin
        $dumpfile("i2s_receiver.vcd");
        $dumpvars(0);
        
        $display("Starting I2S Receiver Testbench...");
        CLK = 0;
        I2S_SCK = 0;
        I2S_WS = 0;
        I2S_SD = 0;
        RST = 1;
        #100;
        RST = 0;
        #100;

        repeat(10) begin
            // --- RIGHT CHANNEL ---
            @(negedge I2S_SCK);
            I2S_WS = 1; // Right channel starts
            $display("Transmitting right channel sample: %h", test_right);
            for (bit_idx = MAX_SAMPLE_WIDTH - 1; bit_idx >= 0; bit_idx = bit_idx - 1) begin
                @(negedge I2S_SCK);
                I2S_SD = test_right[bit_idx];
            end
            
            // --- LEFT CHANNEL ---
            @(negedge I2S_SCK);
            $display("Transmitting left channel sample: %h", test_left);
            I2S_WS = 0; // Left channel
            for (bit_idx = MAX_SAMPLE_WIDTH - 1; bit_idx >= 0; bit_idx = bit_idx - 1) begin
                @(negedge I2S_SCK);
                I2S_SD = test_left[bit_idx];
            end
        end

        @(negedge I2S_SCK);
        I2S_WS = 1; // Return to left (trigger latching of right)

        // Wait for output
        repeat(10) @(posedge CLK);

        $stop;
    end
    
    // validation
    always @(posedge CLK) begin
        if(sample_valid) begin
            if (sample_channel) begin
                $display("Right channel sample: %h", sample_out);
            end else begin
                $display("Left channel sample: %h", sample_out);
            end
        end
    end
    


endmodule
