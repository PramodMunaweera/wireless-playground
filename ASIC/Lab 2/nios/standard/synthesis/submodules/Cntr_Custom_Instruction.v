module Cntr_Custom_Instruction(clk,
								reset,
								n,
								clk_en,
								result,
								start,
								done);

  input clk;			// req
  input reset;			// req
  input clk_en;			// req
  input start;
  input [1:0] n;		// opt (0 = read, 1 = status, 2 = reset)
  output [31:0] result;	// opt
  output done;	// opt

  reg [31:0] index;
  reg done_delay;

  assign done = done_delay;
  assign result = (n == 0) ? index : index < 256;

  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      index <= 0;
      done_delay <= 0;
    end 
    else begin
      if (start & (n == 0)) begin
        index <= index + 1;
      end
      if (start & (n == 2)) begin
        index <= 0;
      end
      done_delay <= start;
    end
  end

endmodule


/*
	

 1 always  @ (a or b or sel)
 2 begin
 3   y = 0;
 4   if (sel == 0) begin
 5     y = a;
 6   end else begin
 7     y = b;
 8   end
 9 end
*/
