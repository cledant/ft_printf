/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse_type.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:25:34 by cledant           #+#    #+#             */
/*   Updated: 2016/04/20 18:47:57 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_create_char(size_t len, char *format)
{
	char	*type;

	if ((type = ft_strnew(len)) == NULL )
		return NULL;
	else
		ft_memcpy(type, format, len);
	return (type);
}

char			*ft_printf_analyse_string(char *format)
{
	char	*cpy_format;
	int		flag_flag;
	int		same_flag[2];
	size_t	len;
	size_t	res_flag_2;

	flag_flag = 6;
	ft_bzero(same_flag, 8);
	len = 0;
	cpy_format = format;
	if (ft_strncmp(cpy_format, "%", 1) == 0)
		return (ft_create_char(1, format));
	while (*cpy_format != '\0')
	{
		if (flag_flag >= 6 && ft_printf_is_flag(cpy_format) == 1)
		{
			len++;
			cpy_format++;
		}
		else if (flag_flag >= 5 && ft_isdigit(*cpy_format) == 1)
		{
			len++;
			cpy_format++;
			flag_flag = 5;
		}
		else if (flag_flag >= 4 && ft_strncmp(cpy_format, ".", 1) == 0)
		{
			if (same_flag[0] > 0)
				return NULL;
			len++;
			cpy_format++;
			same_flag[0]++;
			flag_flag = 4;
		}
		else if (flag_flag >= 3 && ft_isdigit(*cpy_format) == 1)
		{
			len++;
			cpy_format++;
			flag_flag = 3;
		}
		else if (flag_flag >= 2 && (res_flag_2 =
					ft_printf_is_modifier(cpy_format)) > 0)
		{
			if (same_flag[1] > 0)
				return NULL;
			same_flag[1]++;
			len += res_flag_2;
			cpy_format += res_flag_2;
			flag_flag = 2;
		}
		else if (flag_flag >= 1 && ft_printf_is_converter(cpy_format) == 1)
		{
			len++;
			return (ft_create_char(len, format));
		}
		else
			return NULL;
	}
	return NULL;
}
