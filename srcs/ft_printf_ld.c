/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ld.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:39:30 by cledant           #+#    #+#             */
/*   Updated: 2016/04/22 13:00:04 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_ld(va_list list_arg)
{
	long int		val;
	int				len;
	char			*s_val;

	val = va_arg(list_arg, long int);
	ft_printf_putnbr_long_int(val);
	if ((s_val = ft_printf_itoa_long_int(val)) == NULL)
		return (0);
	len = ft_strlen(s_val);
	ft_strdel(&s_val);
	return (len);
}
