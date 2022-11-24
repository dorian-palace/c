SRC = *.c
#SRC contient tout mes fichiers sources

SRCS := ./main.c \
	./my_put.c

show:
	echo $(SRCS)

#//////////

OBJ = $(SRC:.c=.o)
#Récupère mes .c et les compiles en .o	

# OBJS := ${SRCS:c=o}

myObj = *.o
# myObj contient tout mes fichiers .O

CFLAGS += -Werror -Wextra -I./include
# les flags sont les params

NAME = my_pointer_count	

$(NAME) : $(OBJ)
	gcc -o $(NAME) $(OBJ)

all : $(NAME)

nameExe = my_make_evolve

$(nameExe) : $(SRC)
	gcc -Wall $(SRC)

toExe : $(nameExe) 

# source = $(shell ls files/*.c)

# show: 
# 	echo $(source)
