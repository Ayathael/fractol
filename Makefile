# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarah.roger <diamonstarlighting@gmail.com  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 15:44:38 by sarah.roger       #+#    #+#              #
#    Updated: 2022/12/22 17:34:27 by sarah.roger      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

LIBFT_PATH = libft
LIBFT = libft.a
MLX_PATH = mlx
MLX = libmlx.a

SRC_FILES = main.c \
            actions.c \
            hook.c \
            mandelbrot.c \
			julia.c \
			
SRC_DIR = src/
SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}
OBJ = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pg -g
AR = ar -rcs

%.o: %.c
	${CC} -c -Imlx -c $< -o $@
	
all: ${NAME}

libx:
	@MAKE -sC ${MLX_PATH}

libf:
	@MAKE -sC ${LIBFT_PATH}

${NAME}: libx libf ${OBJ}
	${CC} -framework OpenGL -framework AppKit ${LIBFT_PATH}/${LIBFT} ${OBJ} ${MLX_PATH}/${MLX} -o ${NAME}

clean:
	rm -f ${OBJ}
	${MAKE} -C ${LIBFT_PATH} clean
	${MAKE} -C ${MLX_PATH} clean

fclean: clean
	rm -f ${NAME}
	${MAKE} -C ${LIBFT_PATH} fclean
	${MAKE} -C ${MLX_PATH} clean
	rm -f ${MLX_PATH}/${MLX}

re: fclean all

.PHONY: all clean flcean re
