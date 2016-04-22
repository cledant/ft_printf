/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:39:30 by cledant           #+#    #+#             */
/*   Updated: 2016/04/22 13:01:48 by cledant          ###   ########.fr       */
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
	if ((s_val = ft_itoa(val)) == NULL)
		return (0);
	len = ft_strlen(s_val);
	ft_strdel(&s_val);
	return (len);
}
