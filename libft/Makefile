# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 22:47:07 by aridolfi          #+#    #+#              #
#    Updated: 2016/12/01 19:05:53 by aridolfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c			\
		ft_bzero.c			\
		ft_digitcount.c		\
		ft_int_tab_bubble.c	\
 		ft_isalnum.c 		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_iswhitespace.c	\
		ft_itoa.c			\
		ft_lstadd.c			\
		ft_lstback.c		\
		ft_lstdel.c			\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		ft_lstnew.c			\
		ft_memalloc.c		\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memcpy.c			\
		ft_memdel.c			\
		ft_memfind.c		\
		ft_memmove.c		\
		ft_memset.c			\
		ft_memswap.c		\
		ft_putchar_fd.c		\
		ft_putchar.c		\
		ft_putendl_fd.c		\
		ft_putendl.c		\
		ft_putnbr_fd.c		\
		ft_putnbr.c			\
		ft_putstr_fd.c		\
		ft_putstr.c			\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strclr.c			\
		ft_strcmp.c			\
		ft_strcpy.c			\
		ft_strdel.c			\
		ft_strdup.c			\
		ft_strequ.c			\
		ft_strfind.c		\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strjoin.c		\
		ft_strlcat.c		\
		ft_strlen.c			\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_strncat.c		\
		ft_strncmp.c		\
		ft_strncpy.c		\
		ft_strnequ.c		\
		ft_strnew.c			\
		ft_strnstr.c		\
		ft_strsplit.c		\
		ft_strrchr.c		\
		ft_strstr.c			\
		ft_strsub.c			\
		ft_strtrim.c		\
		ft_tolower.c		\
		ft_toupper.c

OBJT = $(SRCS:.c=.o)

CC = @gcc
CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJT)
	@ar rc $(NAME) $(OBJT)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJT)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
