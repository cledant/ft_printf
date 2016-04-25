# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cledant <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 10:40:13 by cledant           #+#    #+#              #
#    Updated: 2016/04/25 12:17:57 by cledant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INCLUDES = ./includes

INCLUDES_LIBFT = ./libft/includes

SRC_NAME =	ft_printf.c ft_printf_is_converter.c ft_printf_analyse_string.c \
			ft_printf_is_flag.c ft_printf_is_modifier.c ft_printf_fill_converter.c \
			ft_printf_parse_type.c ft_printf_fill_flag.c ft_printf_print_args.c \
			ft_printf_fill_modifier.c ft_printf_setup_data.c ft_printf_init_data.c \
			ft_printf_d.c ft_printf_u.c ft_printf_bin_converter.c \
			ft_printf_itoa_unsigned.c ft_printf_o.c ft_printf_octal_converter.c \
			ft_printf_xX.c ft_printf_hex_converter.c ft_strtoupper.c \
			ft_printf_ld.c ft_printf_itoa_long_int.c \
			ft_printf_lo.c ft_printf_octal_converter_long_int.c ft_printf_lu.c \
			ft_printf_itoa_unsigned_long_int.c ft_wcharlen.c \
			ft_printf_s.c ft_printf_c.c ft_wputstr.c ft_printf_ls.c \
			ft_wstrlen.c ft_wputchar.c ft_printf_lc.c

SRC_PATH = ./srcs/

LIBFT_PATH = ./libft

SRC =	$(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ =	$(SRC_NAME:.c=.o)

NAME = libftprintf.a

all : libft $(NAME)

libft :
	make -C $(LIBFT_PATH)

$(NAME) : $(OBJ)
	cp $(LIBFT_PATH)/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ) :
	$(CC) -c $(SRC) $(CFLAGS) -I$(INCLUDES) -I$(INCLUDES_LIBFT)

clean :
	rm -rf $(OBJ)
	make -C $(LIBFT_PATH) clean

fclean : clean
	rm -rf $(NAME)
	make -C $(LIBFT_PATH) fclean

re : fclean all

.PHONY : all clean fclean re libft
