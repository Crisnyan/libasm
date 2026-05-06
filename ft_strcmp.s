section .text
global ft_strcmp

ft_strcmp: ; rdi es s1, rsi es s2
	push rbp
	mov rbp, rsp
	mov ch, 0
	mov cl, 0
	cmp rdi, 0
	je .end
	cmp rsi, 0
	je .end
	mov rax, 0
	jmp .loop
	
.loop:
	mov cl, byte [rdi + rax] ; cl almacena char de s1
	mov ch, byte [rsi + rax] ; ch almacena char de s2
	cmp cl, ch
	jne .set_retval
	cmp cl, 0
	je .end
	inc rax
	jmp .loop

.set_retval:
	sub cl, ch ; cl pasa a almacenar s1 - s2
	jmp .end

.end:
	movsx rax, cl
	leave
	ret
