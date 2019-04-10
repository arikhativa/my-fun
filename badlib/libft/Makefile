# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:48:51 by yrabby            #+#    #+#              #
#    Updated: 2019/04/10 14:14:11 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard *.c) \

FLAG = -Wall -Werror -Wextra

HED = libft.h

all: make_obj

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(HED) author

make_obj: $(SRC)
		@gcc $(FLAG) -c $^
		@ar rv $(NAME) *.o
		@ranlib $(NAME)

clean: 
		@/bin/rm -f *.o

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
