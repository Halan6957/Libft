# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/09 10:07:12 by ahautefe          #+#    #+#              #
#    Updated: 2026/11/16 10:57:22 by ahautefe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = *.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I includes

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.PHONY: all clean fclean re

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

#ajouter ligne pour les fichier .d