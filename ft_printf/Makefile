# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 18:50:46 by dabdurai          #+#    #+#              #
#    Updated: 2023/05/14 06:35:38 by dabdurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

LIB = ar -rcs
LIB = ar -rcs
LIB = ar -rcs
LIB = ar -rcs
OBJ = $(SRC:%.c=%.o)

SRC = ft_printf.c \
	ft_print_utils.c \
	ft_print_pointer.c \
	ft_print_unsigned.c \
	ft_print_hex.c \
	ft_itoa.c \
	ft_putchar_fd.c
	
$(NAME) : $(OBJ)
	@${LIB} ${NAME} ${OBJ}
	
all :	$(NAME)

%.o : %.c
	gcc $(FLAGS) -c $^

norme :
	norminette
clean :	
	rm -f $(NAME)

fclean :	clean
	rm -f *.o

re : fclean all