SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s #ft_strdup.s
OBJ = $(SRC:%.s=%.o)
NAME = libasm.a

all: $(NAME) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

%.o: %.s
	nasm -f elf64 $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

good: all clean

.PHONY: all clean fclean re good
