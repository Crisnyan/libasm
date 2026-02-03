section .text
global ft_strlen

ft_strlen:
	push rbp
	mov rbp, rsp
	mov rax, 0
	jmp .loop

.loop:
	cmp byte [rdi + rax], 0
	je .quit 
	inc rax
	jmp .loop

.quit:
	leave
	ret

