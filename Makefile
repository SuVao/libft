# nome
NAME = libft.a

# compilador
CC = cc

flags = -Wall -Wextra -Werror

# arquivos fonte
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c 

# faz a o substituição de .c por .o
OBJ = $(SRC:.c=.o)

# alvo padrão
all: $(NAME)

# regra de compilação
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

# regras de geração de arquivos .o
%.o: %.c
	$(CC) $(flags) -c $< -o $@

#regra para limpar os arquivos .o
clean:
	rm -f $(OBJ)

# regra para limpar os arquivos gerados duratne a compilação
fclean: clean
	rm -f $(NAME)

# regra para recompilar o projeto do zero
re: fclean all

# Indicando que 'clean', 'fclean' e 're' não são nomes de arquivos
.PHONY: clean fclean re