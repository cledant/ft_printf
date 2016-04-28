/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:22:47 by cledant           #+#    #+#             */
/*   Updated: 2016/04/28 18:33:28 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_lc(va_list list_arg, t_flags *flags)
{
	int			val;
	wchar_t		*str;
	size_t		len;

	if ((val = va_arg(list_arg, wchar_t)) == 0)
	{
		ft_putchar(val);
		return (1);
	}
	if ((str = ft_wstrnew(1)) == NULL)
		return (0);
	*str = val;
	str = ft_printf_chain_modifier_w(str, 0, flags);
	len = ft_wstrlen(str);
	ft_wputstr(str);
	free(str);
	return (len);
}
