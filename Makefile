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

NAME = ../libft.a
COMMAND = gcc
FLAGS = -Wall -Wextra -Werror -c
SRC_TEST = $(shell ls | grep -E "test_.+\.c")
OBJ_TEST = $(SRC_TEST:.c=.o)
TESTS = tests.a
FILE_TEST = ../test

all: $(TESTS)
	$(COMMAND) $(FLAGS) -c main.c -o main.o
	$(COMMAND) -Wall -Wextra -Werror -o $(FILE_TEST) main.o $(NAME) $(TESTS)
	$(FILE_TEST)
	
$(TESTS): $(OBJ_TEST)
	ar rc $(TESTS) $(OBJ_TEST)
	ranlib $(TESTS)

.c.o:
	$(COMMAND) $(FLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJ_TEST)
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f $(TESTS)

re: fclean all

.PHONY: clean fclean all re test
