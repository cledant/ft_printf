/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ls.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 16:41:52 by cledant           #+#    #+#             */
/*   Updated: 2016/04/24 14:49:32 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_ls(va_list list_arg)
{
	wchar_t	*val;
	int		len;

	val = va_arg(list_arg, wchar_t *);
	if (val == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (*val == '\0')
		return (0);
	ft_wputstr(val);
	len = ft_wstrlen(val);
	return (len);
}
