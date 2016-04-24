/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:39:30 by cledant           #+#    #+#             */
/*   Updated: 2016/04/24 14:39:24 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_u(va_list list_arg)
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
	if ((s_val = ft_printf_itoa_unsigned(disp_val)) == NULL)
		return (0);
	ft_putstr(s_val);
	len = ft_strlen(s_val);
	ft_strdel(&s_val);
	return len;
}
