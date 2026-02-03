
section .rodata
	msg db "TEST", 0

section .bss
	buffer resb 20

section .text
global _start
extern ft_strcpy

_start:
	mov rdi, buffer
	mov rsi, msg
	call ft_strcpy
	mov rdi, rax
	mov rax, 60
	syscall
