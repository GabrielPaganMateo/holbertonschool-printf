	.file	"_printf.c"
	.text
	.globl	_printf
	.type	_printf, @function
_printf:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$240, %rsp
	movq	%rdi, -232(%rbp)
	movq	%rsi, -168(%rbp)
	movq	%rdx, -160(%rbp)
	movq	%rcx, -152(%rbp)
	movq	%r8, -144(%rbp)
	movq	%r9, -136(%rbp)
	testb	%al, %al
	je	.L2
	movaps	%xmm0, -128(%rbp)
	movaps	%xmm1, -112(%rbp)
	movaps	%xmm2, -96(%rbp)
	movaps	%xmm3, -80(%rbp)
	movaps	%xmm4, -64(%rbp)
	movaps	%xmm5, -48(%rbp)
	movaps	%xmm6, -32(%rbp)
	movaps	%xmm7, -16(%rbp)
.L2:
	movq	%fs:40, %rax
	movq	%rax, -184(%rbp)
	xorl	%eax, %eax
	movl	$0, -216(%rbp)
	movl	$0, -212(%rbp)
	cmpq	$0, -232(%rbp)
	jne	.L3
	movl	$-1, %eax
	jmp	.L21
.L3:
	movl	$8, -208(%rbp)
	movl	$48, -204(%rbp)
	leaq	16(%rbp), %rax
	movq	%rax, -200(%rbp)
	leaq	-176(%rbp), %rax
	movq	%rax, -192(%rbp)
	jmp	.L5
.L20:
	movl	-216(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$37, %al
	jne	.L6
.L7:
	addl	$1, -216(%rbp)
	movl	-216(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	je	.L7
	movl	-216(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	cmpl	$115, %eax
	je	.L8
	cmpl	$115, %eax
	jg	.L9
	cmpl	$105, %eax
	je	.L10
	cmpl	$105, %eax
	jg	.L9
	cmpl	$100, %eax
	je	.L10
	cmpl	$100, %eax
	jg	.L9
	cmpl	$37, %eax
	je	.L11
	cmpl	$99, %eax
	jne	.L9
	movl	-208(%rbp), %eax
	cmpl	$47, %eax
	ja	.L12
	movq	-192(%rbp), %rax
	movl	-208(%rbp), %edx
	movl	%edx, %edx
	addq	%rdx, %rax
	movl	-208(%rbp), %edx
	addl	$8, %edx
	movl	%edx, -208(%rbp)
	jmp	.L13
.L12:
	movq	-200(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, -200(%rbp)
.L13:
	movl	(%rax), %eax
	movl	%eax, %edi
	call	print_char@PLT
	addl	%eax, -212(%rbp)
	jmp	.L19
.L8:
	movl	-208(%rbp), %eax
	cmpl	$47, %eax
	ja	.L15
	movq	-192(%rbp), %rax
	movl	-208(%rbp), %edx
	movl	%edx, %edx
	addq	%rdx, %rax
	movl	-208(%rbp), %edx
	addl	$8, %edx
	movl	%edx, -208(%rbp)
	jmp	.L16
.L15:
	movq	-200(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, -200(%rbp)
.L16:
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	print_string@PLT
	addl	%eax, -212(%rbp)
	jmp	.L19
.L10:
	movl	-208(%rbp), %eax
	cmpl	$47, %eax
	ja	.L17
	movq	-192(%rbp), %rax
	movl	-208(%rbp), %edx
	movl	%edx, %edx
	addq	%rdx, %rax
	movl	-208(%rbp), %edx
	addl	$8, %edx
	movl	%edx, -208(%rbp)
	jmp	.L18
.L17:
	movq	-200(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	%rdx, -200(%rbp)
.L18:
	movl	(%rax), %eax
	movl	%eax, %edi
	call	print_int@PLT
	addl	%eax, -212(%rbp)
	jmp	.L19
.L11:
	call	print_percent@PLT
	addl	%eax, -212(%rbp)
	jmp	.L19
.L9:
	movl	-216(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	print_default@PLT
	addl	%eax, -212(%rbp)
	jmp	.L19
.L6:
	movl	-216(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	print_char@PLT
	addl	%eax, -212(%rbp)
.L19:
	addl	$1, -216(%rbp)
.L5:
	movl	-216(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L20
	movl	-212(%rbp), %eax
.L21:
	movq	-184(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L22
	call	__stack_chk_fail@PLT
.L22:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_printf, .-_printf
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
