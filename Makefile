# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/16 17:30:26 by hualei            #+#    #+#              #
#    Updated: 2026/11/28 09:11:35 by hualei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f

# source files
SRC = ft_printf.c \
	ft_printf_dispatch.c \
	ft_print_char.c \
	ft_print_string.c \
	ft_print_pointer.c \
	ft_print_number.c \
	ft_print_unsigned.c \
	ft_print_hex.c

# change all .c to .o
OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

# compile .c to .o
# -c only compilation, not doing link
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# ar assemble .o to .a
$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

# remove object files
clean:
	$(RM) $(OBJ)

# remove object files and static library
fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re
