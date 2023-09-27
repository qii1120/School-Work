# computer organization 3
# Find a pivot for the array, and set left to the first element of array, right to the last index of the array. 
# If l>=r, then finish sort, return to $ra.
# Else find arr[l] > arr[p], if we cannot find an arr[l] > arr[p], then l++ until we can find an arr[l] > arr[p] or l>=right.
# Find arr[r] < arr[p], if we cannot find an arr[r] < arr[p], then r-- until we can find an arr[r] < arr[p] or r<=left
# If we can find an arr[r] < arr[p] and l < r, then swap arr[l] and arr[r].
# Else if l>=r, then swap arr[r] and arr[p].
# Sort sub-array which are left side of arr[p] and right side of arr[p].
# Keeping doing above steps until we get the final sorted array.
.data
    SP:
        .asciiz " "
.text
main:
    la      $s0, 0x10010060 # location
    add     $t9, $t9, $zero # count
    jal input
    addi    $a0, $s0, 0 # location
    addi    $a1, $zero, 0 # lower bound 
    addi    $a2, $t9, -1 # last index
    jal qsort
    move    $t1, $zero
    move    $t2, $zero
    jal output
    li      $v0, 10
    syscall
output:
    beq     $t1, $t9, back
    li      $t2, 4
    mult    $t1, $t2
    mflo    $t3
    add     $a0, $s0, $t3
    lw      $a0, 0($a0)
    li      $v0, 1
    syscall
    li      $v0, 4
    la      $a0, SP
    syscall
    addi    $t1, $t1, 1
    j output
input:
    li      $v0, 5
    syscall
    beq     $v0, $zero, back
    addi    $t1, $zero, 4
    mult    $t9, $t1		
    addi    $t9, $t9, 1
    mflo    $t2					# copy Lo to $t2
    add     $s1, $s0, $t2
    sw      $v0, ($s1)
    j input
back: 
    jr $ra

qsort:
	addi	$sp, $sp, -24	
	sw		$s0, 0($sp)		
	sw		$s1, 4($sp)		
	sw		$s2, 8($sp)		
	sw		$a1, 12($sp)	
	sw		$a2, 16($sp)	
	sw		$ra, 20($sp)	

	move	$s0, $a1		# l = low
	move	$s1, $a2		# r = high
	move	$s2, $a1		# pivot = left

sort:
	bge		$s0, $s1, sort_finished  # if s0>=s1 go to sort_finished
	
# find the arr[l] is greater than arr[p]
sort_findleft:
	li		$t7, 4			# t7 = 4

	mult	$s0, $t7
	mflo	$t0				
	add		$t0, $t0, $a0	
	lw		$t0, 0($t0) # t0 = arr[l]

	mult	$s2, $t7
	mflo	$t1
	add		$t1, $t1, $a0	# t1 = arr[p]
	lw		$t1, 0($t1)
    
	bgt		$t0, $t1, sort_findleft_done # if arr[l] > arr[p] go to sort_findleft_done
    
	bge		$s0, $a2, sort_findleft_done # if l>=last index go to sort_findleft_done
	
	addi	$s0, $s0, 1 #l++
	j		sort_findleft
	
sort_findleft_done:

# find the arr[r] is smaller than arr[p]
sort_findright:
	li		$t7, 4	
	
	mult	$s1, $t7
	mflo	$t0			
	add		$t0, $t0, $a0
	lw		$t0, 0($t0) # t0 = arr[r]

	mult	$s2, $t7
	mflo	$t1				
	add		$t1, $t1, $a0	# t1 = arr[p]
	lw		$t1, 0($t1)
	
	blt		$t0, $t1, sort_findright_done # if arr[r] < arr[p] go to sort_findright_done
	
	ble		$s1, $a1, sort_findright_done # if r<=low go to sort_findright_done
	
	addi	$s1, $s1, -1 #r--
	j		sort_findright
	
sort_findright_done:

	blt		$s0, $s1, swap # if l<r go to swap
    # swap arr[p] and arr[r]
	li		$t7, 4			

	mult	$s2, $t7
	mflo	$t6			
	add		$t0, $t6, $a0	# t0 = arr[p]
	
	mult	$s1, $t7
	mflo	$t6			
	add		$t1, $t6, $a0	# t1 = arr[r]

	lw		$t2, 0($t0)
	lw		$t3, 0($t1)
	sw		$t3, 0($t0)
	sw		$t2, 0($t1)
	
# sort left side
	move	$a2, $s1
	addi	$a2, $a2, -1	# a2 = r - 1
	jal		qsort

	lw		$a1, 12($sp)	
	lw		$a2, 16($sp)
	lw		$ra, 20($sp)
	
# sort right side
	move	$a1, $s1
	addi	$a1, $a1, 1		# a1 = r + 1
	jal		qsort

	lw		$a1, 12($sp)	
	lw		$a2, 16($sp)
	lw		$ra, 20($sp)
	
# return
	lw		$s0, 0($sp)	
	lw		$s1, 4($sp)	
	lw		$s2, 8($sp)	
	addi	$sp, $sp, 24
	jr		$ra

swap:
	li		$t7, 4	

	mult	$s0, $t7
	mflo	$t6			
	add		$t0, $t6, $a0	# t0 = arr[l]
	
	mult	$s1, $t7
	mflo	$t6			
	add		$t1, $t6, $a0	# t1 = arr[r]

	lw		$t2, 0($t0)
	lw		$t3, 0($t1)
	sw		$t3, 0($t0)
	sw		$t2, 0($t1)
	
	j		sort
	
sort_finished:
	
# return

	lw		$s0, 0($sp)	
	lw		$s1, 4($sp)	
	lw		$s2, 8($sp)	
	addi	$sp, $sp, 24	
	jr		$ra
