section .text
global ft_write
extern __errno_location ; __errno da problemas de link (no existe)

ft_write:
	push rbp
	mov rbp, rsp
	mov rax, 1
	syscall ; rax contiene num bytes escritos o errno si < 0
	cmp rax, 0
	jl .set_errno
	leave
	ret

.set_errno:
	neg rax
	mov rdi, rax
	call __errno_location WRT ..plt; procedure linkage table para que no haya PIE
	mov [rax], edi
	mov rax, -1
	leave
	ret
