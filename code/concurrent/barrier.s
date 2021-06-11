	.file	"barrier.c"
	.text
	.globl	flag
	.bss
	.align 4
	.type	flag, @object
	.size	flag, 4
flag:
	.zero	4
	.globl	buffer
	.align 32
	.type	buffer, @object
	.size	buffer, 64
buffer:
	.zero	64
	.text
	.globl	producer
	.type	producer, @function
producer:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$64, %edx
	movl	$1, %esi
	leaq	buffer(%rip), %rdi
	call	memset@PLT
	movl	$1, flag(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	producer, .-producer
	.globl	consumer
	.type	consumer, @function
consumer:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	nop
.L3:
	movl	flag(%rip), %eax
	testl	%eax, %eax
	je	.L3
	movzbl	buffer(%rip), %eax
	movb	%al, -1(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	consumer, .-consumer
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
