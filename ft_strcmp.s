section .text
global ft_strcmp

ft_strcmp: ; rdi es s1, rsi es s2
	push rbp
	mov rbp, rsp
	mov bh, 0
	cmp rdi, 0
	je .end
	cmp rsi, 0
	je .end
	mov rax, 0
	jmp .loop
	
.loop:
	mov bl, byte [rdi + rax] ; bl almacena char de s1
	mov bh, byte [rsi + rax] ; bh almacena char de s2
	cmp bl, bh
	jne .set_retval
	cmp bl, 0
	je .end
	inc rax
	jmp .loop

.set_retval:
	sub bl, bh ; bl pasa a almacenar s1 - s2
	jmp .end

.end:
	movsx rax, bl
	leave
	ret
