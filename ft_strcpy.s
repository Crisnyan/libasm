section .text
global ft_strcpy

ft_strcpy: ; rdi is dest, rsi is src
	push rbp
	mov rbp, rsp
	mov rax, 0
	jmp .loop

	
.loop:
	cmp byte [rsi + rax], 0
	je .end
	mov cl, byte [rsi + rax]
	mov byte [rdi + rax], cl
	inc rax
	jmp .loop
	
.end:
	mov cl, byte [rsi + rax]
	mov byte [rdi + rax], cl
	mov rax, rdi
	leave
	ret
