/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:39:30 by cledant           #+#    #+#             */
/*   Updated: 2016/04/24 14:39:33 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_d(va_list list_arg)
{
	int		val;
	int		len;
	char	*s_val;

	val = va_arg(list_arg, int);
	if ((s_val = ft_itoa(val)) == NULL)
		return (0);
	ft_putstr(s_val);
	len = ft_strlen(s_val);
	ft_strdel(&s_val);
	return (len);
}
