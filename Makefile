# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/09 10:07:12 by ahautefe          #+#    #+#              #
#    Updated: 2026/11/24 16:35:04 by ahautefe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = 
ft_atoi
ft_bzero
ft_calloc
ft_isalnum
ft_isalpha
ft_isascii
ft_isdigit
ft_isprint
ft_memchr
ft_memcmp
ft_memcpy
ft_memmove
ft_memset
ft_strchr
ft_strdup
ft_strlcat
ft_strlcpy
ft_strlen
ft_strncmp
ft_strnstr
ft_strrchr
ft_tolower
ft_toupper

ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_backdelone
ft_lstclear
ft_lstiter
ft_lstmap




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

#CINCLUDE = -MMd -MP
