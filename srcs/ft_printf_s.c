/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 15:07:47 by cledant           #+#    #+#             */
/*   Updated: 2016/04/22 17:24:53 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_s(va_list list_arg)
{
	char	*val;
	int		len;

	val = va_arg(list_arg, char *);
	if (val == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (*val == '\0')
		return (0);
	ft_putstr(val);
	len = ft_strlen(val);
	return (len);
}
