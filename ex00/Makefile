# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan_aga@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 10:26:28 by juan-aga          #+#    #+#              #
#    Updated: 2023/10/27 11:05:46 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animal

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -D DEBUG=$(DEBUG) $(INCLUDES)

RM			=	rm -rf

SRC_DIR		=	src/

OBJ_DIR		=	obj/

F_SRC		=	main.cpp			\
				Animal.cpp			\
				Cat.cpp				\
				Dog.cpp				\
				WrongAnimal.cpp		\
				WrongCat.cpp

SRC			=	${addprefix $(SRC_DIR), $(F_SRC)}

OBJ			=	${patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.opp, $(SRC)}

INCLUDES	=	-I./inc/

HEADERS		=	inc/Animal.hpp	\
				inc/Cat.hpp		\
				inc/Dog.hpp		\
				inc/WrongAnimal.hpp	\
				inc/WrongCat.hpp

ifdef DEBUG
	DEBUG	=	1
else
	DEBUG	=	0
endif

UNAME_S		:=	$(shell uname -s)

ifeq ($(UNAME_S), Darwin)
		LEAKS =	@leaks -q -atExit -- ./${NAME} ${ARG}
else
		LEAKS =	@echo "Can't use leaks in" ${UNAME_S}.
endif

ifndef	ARG
		ARG	=	
endif

all:		${NAME}

${NAME}:	$(HEADERS) ${OBJ}
			${CC} ${CFLAGS} ${OBJ} -o ${NAME}

$(OBJ_DIR)%.opp: $(SRC_DIR)%.cpp
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $^ -o $@

debug:
			make re DEBUG=1

leaks:		${NAME}
			${LEAKS}

val:		${NAME}
			@valgrind ./${NAME} ${ARG}

clean: 
			$(RM) $(OBJ_DIR)

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
