module ExtOut_Custom_Instruction(clk,
								reset,
								clk_en,
								start,
								dataa,
								done,
								ext_data,
								ext_dv);

  input clk;			// req
  input reset;			// req
  input clk_en;			// req
  input start;
  input [31:0] dataa;
  output done;	// opt
  output [31:0] ext_data;
  output ext_dv;

  reg [31:0] val;
  reg done_delay;

  assign done = done_delay;
  assign ext_dv = done_delay;
  assign ext_data = val;

  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      val <= 0;
      done_delay <= 0;
    end 
    else begin
      if (start) begin
        val <= dataa;
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

