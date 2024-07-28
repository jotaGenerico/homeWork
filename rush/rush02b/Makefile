# Nome do programa final
NAME = rush-02

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -Werror -D_GNU_SOURCE

# Arquivos fonte
SRC = main.c dict_utils.c str_utils.c number_processing.c globals.c

# Arquivos objeto (substituindo .c por .o)
OBJ = $(SRC:.c=.o)

# Regra padrão
all: $(NAME)

# Compilação do programa
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Regra para arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpa arquivos objeto
clean:
	rm -f $(OBJ)

# Limpa arquivos objeto e o executável
fclean: clean
	rm -f $(NAME)

# Reconstrói o projeto do zero
re: fclean all

# Declara que estes alvos não são arquivos
.PHONY: all clean fclean re
