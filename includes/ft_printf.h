/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 10:55:21 by cledant           #+#    #+#             */
/*   Updated: 2016/04/25 19:35:56 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <limits.h>

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
int				ft_printf_s(va_list list_arg);
int				ft_printf_c(va_list list_arg);
int				ft_printf_d(va_list list_arg);
int				ft_printf_u(va_list list_arg);
int				ft_printf_o(va_list list_arg);
int				ft_printf_xX(va_list list_arg, int maj);
int				ft_printf_ls(va_list list_arg);
int				ft_printf_lc(va_list list_arg);
int				ft_printf_ld(va_list list_arg);
int				ft_printf_lo(va_list list_arg);
int				ft_printf_lu(va_list list_arg);
int				ft_printf_lxX(va_list list_arg, int maj);
int				ft_printf_lld(va_list list_arg);
int				ft_printf_llo(va_list list_arg);
int				ft_printf_llu(va_list list_arg);
int				ft_printf_llxX(va_list list_arg, int maj);
char			*ft_printf_octal_converter(unsigned int n);
char			*ft_printf_hex_converter(unsigned int n);
char			*ft_printf_octal_converter_long_int(unsigned long int n);
char			*ft_printf_hex_converter_long_int(unsigned long int n);
char			*ft_printf_octal_converter_long_long_int(unsigned \
					long long int n);
char			*ft_printf_hex_converter_long_long_int(unsigned \
					long long int n);
char			*ft_printf_itoa_unsigned(unsigned int n);
char			*ft_printf_itoa_long_int(long int n);
char			*ft_printf_itoa_unsigned_long_int(unsigned long int n);
char			*ft_printf_itoa_long_long_int(long long int n);
char			*ft_printf_itoa_unsigned_long_long_int(unsigned long int n);
void			ft_strtoupper(char *s);
void			ft_wputchar(wchar_t c);
void			ft_wputstr(wchar_t *s);
size_t			ft_wstrlen(wchar_t *s);
size_t			ft_wcharlen(wchar_t c);

#endif
