/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:39:30 by cledant           #+#    #+#             */
/*   Updated: 2016/04/21 09:47:26 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_d(va_list list_arg)
{
	int		val;
	int		len;
	char	*s_val;

	val = va_arg(list_arg, int);
	ft_putnbr(val);
	s_val = ft_itoa(val);
	len = ft_strlen(s_val);
	ft_strdel(&s_val);
	return len;
}
