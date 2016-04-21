/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 11:30:42 by cledant           #+#    #+#             */
/*   Updated: 2016/04/21 17:00:09 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char* restrict format, ...)
{
	va_list list_arg;
	size_t	read_char;
	size_t	ret_parse;
	int		skip;
	char	*cpy_format;

	if ((cpy_format = ft_strdup(format)) == NULL)
		return 0;
	read_char = 0;
	va_start(list_arg, format);
	while (*cpy_format != '\0')
	{
		skip = 0;
		if (ft_strncmp(cpy_format, "%", 1) == 0)
		{
			if ((ret_parse = ft_printf_parse_type(cpy_format,
							list_arg, &skip, &read_char)) == 0)
			{
				ft_putchar(*cpy_format);
				cpy_format++;
				read_char++;
			}
			else
				cpy_format += ret_parse + 1;
		}
		else
		{
			ft_putchar(*cpy_format);
			cpy_format++;
			read_char++;
		}
		if (skip == 1)
			cpy_format++;
		ret_parse = 0;
	}
	ft_putchar('\0');
	ft_strdel(&cpy_format);
	va_end(list_arg);
	return (read_char);
}
