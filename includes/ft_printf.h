/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 10:55:21 by cledant           #+#    #+#             */
/*   Updated: 2016/04/21 18:50:59 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef struct	flags
{
	int			space;
	int			sharp;
	int			pad_zero;
	int			pad_space;
	size_t		pad_size;
	int			sign;
	int			precision;
	size_t		preci_size;
	int			double_pc;
	int			length;
	size_t		type;
}				t_flags;

char			*ft_printf_analyse_string(char *format);
size_t			ft_printf_parse_type(char *format, va_list list_arg,
					int *skip, size_t *nb_print);
void			ft_printf_init_data(t_flags *data);
void			ft_printf_setup_data(char *data, t_flags *flag);
int				ft_printf_print_args(t_flags *flag, va_list list_arg);
int				ft_printf_is_converter(char *format);
int				ft_printf_is_modifier(char *format);
int				ft_printf_is_flag(char *format);
void			ft_printf_fill_flag(char *format, t_flags *data);
void			ft_printf_fill_converter(char *format, t_flags *data);
void			ft_printf_fill_modifier(char *format, t_flags *data);
int				ft_printf_d(va_list list_arg);
int				ft_printf_u(va_list list_arg);
void			ft_printf_putnbr_unsigned(unsigned int n);
char			*ft_printf_itoa_unsigned(unsigned int n);

#endif
