.data
    value: 
        .space 400
    symbol:
    	.space 400
    msg1:
    	.asciiz "Please input a formula by inputting each symbol one line.\n"
    expl:
    	.asciiz "Symbol '+' means add.\nSymbol '-' means minus. \nSymbol '*' means multiply\nSymbol '/' means divide.\nWe only provide the operations of integers, which means we discard the operations of remainders.\n"
    exam:
    	.asciiz "For example:\n14\n+\n6\n*\n3\n/\n2\n-\n1\n=\nHere is your formula:\n"
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
    la $a0, msg1
    li $v0, 4
    syscall
    la $a0, expl
    li $v0, 4
    syscall
    la $a0, exam
    li $v0, 4
    syscall
    li $s0, 0 # index
    la $s1, symbol # s1 = address of symbol
    la $s2, value # s2 = address of value
    
    jal input
    
    li $v0, 10
    syscall
input:
    la $t0, equal
    lbu $t0, 0($t0)
    beq $t2, $t0, default

    sll $t0, $s0, 2
    li $v0, 5
    syscall
    add $t1, $s2, $t0
    sw $v0, 0($t1)

    add $t1, $s1, $t0
    li $v0, 8
    move $a0, $t1
    li $a1, 4 
    syscall
    lb $t2, 0($t1) 
    addi $s0, $s0, 1
    j input
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
    lb $a2, 0($a2) # operator_2 = a2 = symbol[index]
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
    lb $a3, 0($a3) # operator_3 = a3 = symbol[index]
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
    lb $a3, 0($a3) # operator_3 = a3 = symbol[index]
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
