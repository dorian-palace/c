SRC = *.c
#SRC contient tout mes fichiers sources

SRCS := ./main.c \


show:
	echo $(SRCS)

#//////////

OBJ = $(SRCS:.c=.o)
#Récupère mes .c et les compiles en .o	

# OBJS := ${SRCS:c=o}

myObj = *.o
# myObj contient tout mes fichiers .O

CFLAGS += -Werror -Wextra -I./include
# les flags sont les params

NAME = my_pointer_mix_max	

$(NAME) : $(OBJ)
	gcc -o $(NAME) $(OBJ)

all : $(NAME)

nameExe = my_show_arg

$(nameExe) : $(SRC)
	gcc -Wall $(SRC)

toExe : $(nameExe) 

# source = $(shell ls files/*.c)

# show: 
# 	echo $(source)
