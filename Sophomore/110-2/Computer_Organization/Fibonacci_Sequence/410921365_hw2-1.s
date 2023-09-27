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

    la $s0, FIB
    lw $t0, 0($s0) #0
    lw $t1, 4($s0) #1
    add $t2, $v0, $zero #n

    li $v0, 1 #print 0
    add $a0, $t0, $zero
    syscall

    li $v0, 4
    la $a0, SP #space
    syscall

    addi $t3, $t3, 1
loop:
    beq $t3, $t2, exit

    li $v0, 1
    add $a0, $t1, $zero
    syscall
    
    li $v0, 4
    la $a0, SP
    syscall

    add $t4, $t0, $t1
    addi $t3, $t3, 1
    move $t0, $t1
    move $t1, $t4
    j loop

exit:
    li $v0, 10
    syscall

