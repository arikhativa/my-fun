# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:48:51 by yrabby            #+#    #+#              #
#    Updated: 2019/04/08 15:47:33 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard src1/*.c) \
	  $(wildcard src2/*.c) \
	  $(wildcard src3/*.c)

HED = includes

FLAG = -Wall -Werror -Wextra

all: make_obj

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(HED) author

make_obj: $(SRC)
		@gcc $(FLAG) -c $^ -I $(HED)
		@ar rv $(NAME) *.o
		@ranlib $(NAME)

clean: 
		@/bin/rm -f *.o

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
