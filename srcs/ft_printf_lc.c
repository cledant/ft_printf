/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 15:07:47 by cledant           #+#    #+#             */
/*   Updated: 2016/04/25 12:18:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_lc(va_list list_arg)
{
	wchar_t		val;

	val = va_arg(list_arg, wchar_t);
	if (val == '\0')
	{
		ft_putchar('\0');
		return (1);
	}
	ft_wputchar(val);
	return (ft_wcharlen(val));
}
