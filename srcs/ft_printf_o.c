/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 09:26:17 by cledant           #+#    #+#             */
/*   Updated: 2016/04/22 09:39:33 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_o(va_list list_arg)
{
	int					val;
	unsigned int		disp_val;
	int					len;
	char				*s_val;

	val = va_arg(list_arg, int);
	if (val < 0)
		disp_val = (unsigned int)val;
	else
		disp_val = val;
	if ((s_val = ft_printf_octal_converter(disp_val)) == NULL)
		return (0);
	len = ft_strlen(s_val);
	ft_putstr(s_val);
	ft_strdel(&s_val);
	return (len);
}
