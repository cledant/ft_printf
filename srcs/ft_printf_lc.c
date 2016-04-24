/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 15:07:47 by cledant           #+#    #+#             */
/*   Updated: 2016/04/24 14:47:36 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_lc(va_list list_arg)
{
	int		val;

	val = va_arg(list_arg, wchar_t);
	ft_wputchar(val);
	return (sizeof(val));
}
