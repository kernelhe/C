	.file	"func1.c"
	.text
	.data
	.align 4
	.type	j, @object
	.size	j, 4
j:
	.long	9
	.text
	.globl	func2
	.type	func2, @function
func2:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$6, j(%rip)
	movl	j(%rip), %eax
	addl	$1, %eax
	movl	%eax, j(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	func2, .-func2
	.globl	func1
	.type	func1, @function
func1:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	i.1799(%rip), %eax
	addl	$1, %eax
	movl	%eax, i.1799(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	func1, .-func1
	.data
	.align 4
	.type	i.1799, @object
	.size	i.1799, 4
i.1799:
	.long	6
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
