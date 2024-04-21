# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 16:23:46 by aabduvak          #+#    #+#              #
#    Updated: 2022/08/28 17:28:07 by alyazici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard sources/*.c)
OBJS			= $(SRCS:.c=.o)

NAME			= push_swap
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
LIB				= ./libft/libft.a

INC_FT			= ./libft/sources
INC_GN			= ./libft/GNL/sources
INC_PR			= ./libft/ft_printf/sources
INC				= ./includes

all : $(LIB) ${NAME}

$(LIB):
	make -C ./libft

$(NAME) : ${OBJS}
	$(CC) $(OBJS) -o $(NAME) $(LIB)

.c.o:
	${CC} ${CFLAGS} -c $< -o $@ -I$(INC_PR) -I$(INC_GN) -I$(INC_FT) -I$(INC)

test: $(NAME)
	bash tester/tester.sh
# $< input files
# $@ output files
# in makefile used to create oputput files in their subfolder

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

ffclean: fclean
	make fclean -C ./libft

norm :
	@norminette libft/
	@norminette sources/*.[ch]

re : fclean all

.PHONY: all clean fclean re run test