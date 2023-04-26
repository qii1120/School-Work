	.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
	li x3, 5
    auipc x1, 0x2
    add x1, x1, -8
    li x2, 10
    auipc x15, 0x0
    add x15, x15, 16
    sb x2, 3(x1)
    lb x14, 3(x1)
    jal x0, 0x28
    mv x14, x2
    li x7, 10
    li x5, 1; 
    lui x6, 0x200; 
    addi x6, x6, 0x8; 
    sw x5, 0(x6); 
_array:	
	.byte 0x10
	.byte 0x20
	.byte 0x30
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
_end:
	.end			# End of file