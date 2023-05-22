.text			# Define beginning of text section
.global	_start		# Define entry _start

_start:
    li x3, 1
	li x6, 2
	csrrw x3, mstatus, x3
	csrrs x6, mstatus, x6
	csrrc x7, mstatus, x7
	csrrwi x8, mstatus, 0
	csrrsi x9, mstatus, 3
	csrrci x10, mstatus, 1
	csrrwi x11, mstatus, 0
	.end			# End of file