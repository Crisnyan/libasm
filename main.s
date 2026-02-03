
section .rodata
	msg db "TEST", 0

section .text
global _start
extern ft_strlen

_start:
	mov rdi, msg
	call ft_strlen
	mov rdi, rax
	mov rax, 60
	syscall
