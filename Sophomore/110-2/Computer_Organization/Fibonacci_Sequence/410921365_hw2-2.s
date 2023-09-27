#computer organization HW2
.data
FIB:
    .word 0
    .word 1
SP:
    .asciiz " "
.text
main:
    li $v0, 5 #get input from user
    syscall
    add $t2, $t2, $v0
    la $s1, 0x10010060
    sw $t2, ($s1)
    addi $s1, $s1, 4

    la $s0, FIB
    lw $t0, 0($s0) #0
    lw $t1, 4($s0) #1

    sw $t0, ($s1) #put 0
    addi $s1, $s1, 4

    addi $t3, $t3, 1
loop:
    beq $t3, $t2, exit

    sw $t1, ($s1)
    addi $s1, $s1, 4

    add $t4, $t0, $t1
    addi $t3, $t3, 1
    move $t0, $t1
    move $t1, $t4
    j loop

exit:
    li $v0, 10
    syscall

