# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 03:40:09 by abaurens          #+#    #+#              #
#    Updated: 2018/11/14 15:58:26 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	lib_tester

SRC		=	main.c					test_ft_strmapi.c		\
			test_ft_strsub.c		test_ft_strnequ.c		\
			test_ft_striteri.c		test_ft_strjoin.c		\
			test_ft_strmap.c		test_ft_strequ.c		\
			test_ft_striter.c		test_ft_strsplit.c		\
			test_ft_strtrim.c		test_ft_memalloc.c		\
			test_ft_strnew.c		test_ft_memdel.c		\
			test_ft_strdel.c		test_ft_strclr.c		\
			test_ft_itoa.c			test_ft_putnbr.c		\
			test_ft_putstr.c		test_ft_putchar.c		\
			test_ft_putendl.c		test_ft_putnbr_fd.c		\
			test_ft_putstr_fd.c		test_ft_putchar_fd.c	\
			test_ft_putendl_fd.c	test_ft_memset.c		\
			test_ft_bzero.c			test_ft_strchr.c		\
			test_ft_memcpy.c		test_ft_memccpy.c		\
			test_ft_memmove.c		test_ft_memchr.c		\
			test_ft_memcmp.c		test_ft_strlen.c		\
			test_ft_strdup.c		test_ft_strcpy.c		\
			test_ft_strncpy.c		test_ft_strcat.c		\
			test_ft_strncat.c		test_ft_strlcat.c		\
			test_ft_strrchr.c		test_ft_atoi.c			\
			test_ft_strstr.c		test_ft_strnstr.c		\
			test_ft_strcmp.c		test_ft_strncmp.c		\
			test_ft_isalpha.c		test_ft_isdigit.c		\
			test_ft_isalnum.c		test_ft_isascii.c		\
			test_ft_isprint.c		test_ft_toupper.c		\
			test_ft_tolower.c		test_ft_lstnew.c		\
			test_ft_lstdelone.c		test_ft_lstdel.c		\
			test_ft_lstadd.c		test_ft_lstiter.c		\
			test_ft_lstmap.c

OBJ		=	$(SRC:.c=.o)

RM		=	rm -rf

CC		=	gcc

LIBS	=	libft.a

CFLAGS	=	-I./libft -W -Wall -Wextra -ansi -pedantic

LDFLAGS	=	-L./libft -lft

LINKER	=	gcc

INCLUDE	=	-I./includes

$(NAME):	$(LIBS) $(OBJ)
	$(LINKER) -o $(NAME) $(LDFLAGS) $(OBJ)

$(LIBS):
	make -C ./libft
	@cp ./libft/$(LIBS) ./

all: $(NAME)

clean:
	@make -C ./libft clean
	@$(RM) $(OBJ)

fclean:
	@make -C ./libft fclean
	@$(RM) $(OBJ)
	$(RM) $(LIBS)
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
