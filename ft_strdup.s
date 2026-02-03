section .text
global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc ; malloc ya setea errno

ft_strdup:
	push rbp
	mov rbp, rsp
	sub rsp, 16 ; alineacion del stack 16 bytes (malloc puede crashear si no)
	mov [rbp - 8], rdi ; variable local
	call ft_strlen ; rax ahora tiene la longitud de la string
	inc rax ; + 1 para el caracter nulo
	mov rdi, rax
	call malloc WRT ..plt ; se destruye rdi, pero se asignan rdi bytes
	cmp rax, 0
	jz .nomem
	mov rdi, rax ; rax contiene el ptr a la memoria asignada
	mov rsi, [rbp - 8] ; rax contiene el ptr a la memoria asignada
	call ft_strcpy
	leave
	ret

.nomem:
	mov rax, 0
	leave
	ret
