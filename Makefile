SRCS_DIR = ./srcs/

SRC = main.c ft_getid.c ft_getname.c ft_search.c ft_getquantity.c ft_getvalue.c ft_insert.c

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ =$(SRCS:.c=.o)

HEADER_DIR = ./includes/

CC = clang

CFLAGS = -Wall -Wextra -Werror

OUTPUT = KupGest

all : $(OUTPUT)

.c.o:
	${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

$(OUTPUT) : $(SRCS_OBJ)
	${CC} ${CFLAGS} -o ${OUTPUT} ${SRCS_OBJ}

clean :
	rm -f $(SRCS_OBJ)

fclean : clean
	rm -f $(OUTPUT)

re : fclean all

.PHONY : all clean fclean re
