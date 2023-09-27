.data
    array:
        .space 800
    value: 
        .space 400
    symbol:
    	.space 400
    msg1:
    	.asciiz "Please input a formula: "
    expl:
    	.asciiz "Symbol '+' means add.\nSymbol '-' means minus. \nSymbol '*' means multiply\nSymbol '/' means divide.\nWe only provide the operations of integers, which means we discard the operations of remainders.\n"
    exam:
    	.asciiz "For example: 14+6*3/2-1= \n"
    msg2:
    	.asciiz "The result is: "
    addition:
        .asciiz "+"
    minus:
        .asciiz "-"
    multiply:
        .asciiz "*"
    divide:
        .asciiz "/"
    equal:
        .asciiz "="
    remain:
        .asciiz "...."
.text
main:
    la $a0, expl
    li $v0, 4
    syscall
    la $a0, exam
    li $v0, 4
    syscall
    la $a0, msg1
    li $v0, 4
    syscall
    la $s0, array # s0 = address of input
    la $s1, symbol # s1 = address of symbol
    la $s2, value # s2 = address of value
    li $v0, 8
    move $a0, $s0
    li $a1, 800
    syscall # get input
    
    li $a1, 0 #index of array
    li $a2, 0 #index of value
    jal sep
    
    li $v0, 10
    syscall
sep:
    la $t0, equal
    lbu $t0, 0($t0)
    beq $t2, $t0, default 
    
    add $t1, $s0, $a1 # t1 = address of array[index]
    lb $t2, 0($t1) # array[index]
    addi $t2, $t2, -48
    sll $t4, $a2, 2
    add $t3, $s2, $t4 # t3 = address of value[index2]
    sw $t2, 0($t3) # value[index2] = array[index]
    addi $a1, $a1, 1
    li $t9, 10
    jal times

    add $t1, $s0, $a1 # t1 = address of array[index+1]
    lbu $t2, 0($t1) # array[index+1]
    add $t3, $s1, $t4 # t3 = address of symbol[index2]
    sb $t2, 0($t3) # symbol[index2]=array[index+1]

    addi $a1, $a1, 1
    addi $a2, $a2, 1
    j sep
times:
    add $t1, $s0, $a1 # t1 = address of array[index]
    lb $t2, 0($t1) # array[index]
    blt $t2, 48, back
    bgt $t2, 57, back
    
    addi $t2, $t2, -48
    lw $t8, 0($t3)
    mul $t8, $t8, $t9
    add $t8, $t8, $t2
    sw $t8, 0($t3)
    addi $a1, $a1, 1
    j times
back:
    jr $ra
default:
    li $t1, 0 # input 1
    li $t2, 0 # input 2
    li $t3, 0 # input 3
    li $t5, 0 # remainder
    la $t4, addition
    lb $a1, 0($t4) # operator 1
    li $a2, 0 # operator 2
    li $a3, 0 # operator 3
    li $s3, 0 # index
    jal calculate

calculate:
    la $t0, equal
    lbu $t0, 0($t0)
    beq $a1, $t0, output # if operator_1 == '='

    sll $t2, $s3, 2 # index * 4
    add $t2, $t2, $s2 # t2 = address of value[index]
    lw $t2, 0($t2) # input_2 = t2 = value[index]
    
    sll $a2, $s3, 2 # index * 4
    add $a2, $a2, $s1 # a2 = address of symbol[index]
    lw $a2, 0($a2) # operator_2 = a2 = symbol[index]
    addi $s3, $s3, 1

    la $t4, multiply
    lb $t4, 0($t4)
    beq $a2, $t4, multfunc # if operator_2 == '*'

    la $t4, divide
    lb $t4, 0($t4)
    beq $a2, $t4, divfunc # if operator_2 == '/'

    la $t4, addition
    lb $t4, 0($t4)
    beq $a1, $t4, addfunc # if operator_1 == '+'

    la $t4, minus
    lb $t4, 0($t4)
    beq $a1, $t4, subfunc # if operator_1 == '-'

    la $t4, addition
    lb $t4, 0($t4)
    beq $a2, $t4, addfunc # if operator_2 == '+'

    la $t4, minus
    lb $t4, 0($t4)
    beq $a2, $t4, subfunc # if operator_2 == '-'

multfunc:
    sll $t3, $s3, 2 # index * 4
    add $t3, $t3, $s2 # t3 = address of value[index]
    lw $t3, 0($t3) # input_3 = t3 = value[index]

    sll $a3, $s3, 2 # index * 4
    add $a3, $a3, $s1 # a3 = address of symbol[index]
    lw $a3, 0($a3) # operator_3 = a3 = symbol[index]
    addi $s3, $s3, 1

    mul $t2, $t2, $t3 # input_2 = input_2 * input_3
    add $t2, $t2, $t6
    move $a2, $a3 # move forward

    la $t4, multiply
    lb $t4, 0($t4)
    beq $a2, $t4, multfunc # if operator_2 == '*'

    la $t4, divide
    lb $t4, 0($t4)
    beq $a2, $t4, divfunc # if operator_2 == '/'

    la $t4, addition
    lb $t4, 0($t4)
    beq $a1, $t4, addfunc # if operator_1 == '+'

    la $t4, minus
    lb $t4, 0($t4)
    beq $a1, $t4, subfunc # if operator_1 == '-'
divfunc:
    sll $t3, $s3, 2 # index * 4
    add $t3, $t3, $s2 # t3 = address of value[index]
    lw $t3, 0($t3) # input_3 = t3 = value[index]

    sll $a3, $s3, 2 # index * 4
    add $a3, $a3, $s1 # a3 = address of symbol[index]
    lw $a3, 0($a3) # operator_3 = a3 = symbol[index]
    addi $s3, $s3, 1

    div $t2, $t3
    mflo $t2 # quotient
    mfhi $t8 # remainder
    move $a2, $a3

    la $t4, multiply
    lb $t4, 0($t4)
    beq $a2, $t4, multfunc # if operator_2 == '*'

    la $t4, divide
    lb $t4, 0($t4)
    beq $a2, $t4, divfunc # if operator_2 == '/'

    la $t4, addition
    lb $t4, 0($t4)
    beq $a1, $t4, addfunc # if operator_1 == '+'

    la $t4, minus
    lb $t4, 0($t4)
    beq $a1, $t4, subfunc # if operator_1 == '-'
addfunc:
    add $t1, $t1, $t2
    move $a1, $a2
    jal calculate
subfunc:
    sub $t1, $t1, $t2
    move $a1, $a2
    jal calculate
output:
    la $a0, msg2
    li $v0, 4
    syscall
    move $a0, $t1
    li $v0, 1
    syscall

    la $a0, remain
    li $v0, 4
    syscall

    move $a0, $t5
    li $v0, 1
    syscall

    li $v0, 10
    syscall
