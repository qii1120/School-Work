	.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
	li x2, 0x80000000;
    li x3, 5;
    li x4, 0x70000000;
    li x7, -5;
    mul x8, x3, x2; // + * -
    mulh x9, x3, x2;
    mul x10, x4, x3; // + * +
    mulh x11, x4, x3;
    mul x12, x2, x7; // - * -
    mulh x13, x2, x7;
    li x14, 5;
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