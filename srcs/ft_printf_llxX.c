/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_llxX.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 19:19:52 by cledant           #+#    #+#             */
/*   Updated: 2016/04/25 19:20:13 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_llxX(va_list list_arg, int maj)
{
	long long int			val;
	unsigned long long int	disp_val;
	int						len;
	char					*s_val;

	val = va_arg(list_arg, long long int);
	if (val < 0)
		disp_val = (unsigned long long int)val;
	else
		disp_val = val;
	if ((s_val = ft_printf_hex_converter_long_long_int(disp_val)) == NULL)
		return (0);
	len = ft_strlen(s_val);
	if (maj == 1)
		ft_strtoupper(s_val);
	ft_putstr(s_val);
	ft_strdel(&s_val);
	return (len);
}