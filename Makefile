# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 14:56:13 by rrhaenys          #+#    #+#              #
#    Updated: 2018/11/20 14:56:15 by rrhaenys         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../libft/libft.a
COMMAND = clang
FLAGS = -Wall -Wextra -Werror -c -g
SRC_TEST = $(shell ls | grep -E "test_.+\.c")
OBJ_TEST = $(SRC_TEST:.c=.o)
TESTS = tests.a
FILE_TEST = test.out
MAIN = main.o

all: lib $(TESTS) $(MAIN)
	$(COMMAND) -Wall -Wextra -Werror -I tests.h -o $(FILE_TEST) main.o $(NAME) $(TESTS)

lib:
	make -C ../libft


$(TESTS): $(OBJ_TEST)
	ar rc $(TESTS) $(OBJ_TEST)
	ranlib $(TESTS)

.c.o:
	$(COMMAND) $(FLAGS) -I tests.h -c $< -o $@

clean:
	/bin/rm -f $(OBJ_TEST)
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f $(TESTS)

re: fclean all

.PHONY: all lib .c.o clean fclean re
