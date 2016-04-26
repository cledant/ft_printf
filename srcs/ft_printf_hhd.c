/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hhd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 09:59:01 by cledant           #+#    #+#             */
/*   Updated: 2016/04/26 15:02:36 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_hhd(va_list list_arg)
{
	int				val;
	char			d_val;
	int				len;
	char			*s_val;

	val = va_arg(list_arg, int);
	d_val = (char)val;
	if ((s_val = ft_itoa(d_val)) == NULL)
		return (0);
	ft_putstr(s_val);
	len = ft_strlen(s_val);
	ft_strdel(&s_val);
	return (len);
}
