/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 11:30:42 by cledant           #+#    #+#             */
/*   Updated: 2016/04/20 18:49:40 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char* restrict format, ...)
{
	va_list list_arg;
	size_t	read_char;
	size_t	ret_parse;
	int		skip;

	read_char = 0;
	va_start(list_arg, format);
	while (*format)
	{
		skip = 0;
		if (ft_strncmp(format, "%", 1) == 0)
		{
			if ((ret_parse = ft_printf_parse_type((char *)format,
							list_arg, &skip)) == 0)
			{
				ft_putchar(*format);
				format++;
				read_char++;
			}
			else
			{
				read_char += ret_parse;
				format += ret_parse;
			}
		}
		else
		{
			ft_putchar(*format);
			format++;
			read_char++;
		}
		if (skip == 1)
			format++;
	}
	va_end(list_arg);
	return (read_char);
}
