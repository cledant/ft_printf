/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 09:59:01 by cledant           #+#    #+#             */
/*   Updated: 2016/04/26 11:13:59 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_hD(va_list list_arg)
{
	int						val;
	short unsigned int		d_val;
	int						len;
	char					*s_val;

	val = va_arg(list_arg, int);
	d_val = (short unsigned int)val;
	if ((s_val = ft_itoa(d_val)) == NULL)
		return (0);
	ft_putstr(s_val);
	len = ft_strlen(s_val);
	ft_strdel(&s_val);
	return (len);
}
