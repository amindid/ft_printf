# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 16:57:19 by aouchaad          #+#    #+#              #
#    Updated: 2022/10/23 16:21:44 by aouchaad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	ft_printf.c \
			ft_put_adress.c \
			ft_put_char.c \
			ft_put_nbr.c \
			ft_put_str.c \
			ft_put_hexadcml.c \
			ft_put_unsignd_deciml.c

OBJS	=	${SRC:.c=.o}

NAME	=	libftprintf.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean : 
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all
