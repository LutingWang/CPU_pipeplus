`define handlerAddr 32'h0000_4180

`define ExcCode_int 5'b0
`define ExcCode_adel 5'b00100
`define ExcCode_ades 5'b00101
`define ExcCode_ri 5'b01010
`define ExcCode_ov 5'b01100
`define ExcCode_default 5'b11111
`define ExcCode_init 5'b0

`define cp0_sr 6'b101100
`define cp0_cause 6'b101101
`define cp0_epc 6'b101110
`define cp0_prid 6'b101111

`define timer1_ctrl_addr 32'h00007f00
`define timer2_ctrl_addr 32'h00007f10
`define timer1_preset_addr 32'h00007f04
`define timer2_preset_addr 32'h00007f14
`define timer1_count_addr 32'h00007f08
`define timer2_count_addr 32'h00007f18