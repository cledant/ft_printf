/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 15:07:47 by cledant           #+#    #+#             */
/*   Updated: 2016/04/28 17:00:41 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_c(va_list list_arg, t_flags *flags)
{
	int		val;
	char	*str;
	size_t	len;

	if ((val = va_arg(list_arg, int)) == 0)
	{
		ft_putchar(val);
		return (1);
	}
	if ((str = ft_strnew(1)) == NULL)
		return (0);
	*str = val;
	str = ft_printf_chain_modifier(str, 0, flags);
	len = ft_strlen(str);
	ft_putstr(str);
	return (len);
}
