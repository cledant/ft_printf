/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:39:30 by cledant           #+#    #+#             */
/*   Updated: 2016/04/24 14:49:07 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_lu(va_list list_arg)
{
	long int			val;
	unsigned long int	disp_val;
	int					len;
	char				*s_val;

	val = va_arg(list_arg, long int);
	if (val < 0)
		disp_val = (unsigned long int)val;
	else
		disp_val = val;
	if ((s_val = ft_printf_itoa_unsigned_long_int(disp_val)) == NULL)
		return (0);
	ft_putstr(s_val);
	len = ft_strlen(s_val);
	ft_strdel(&s_val);
	return (len);
}
