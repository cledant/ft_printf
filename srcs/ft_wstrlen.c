/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 16:14:44 by cledant           #+#    #+#             */
/*   Updated: 2016/04/24 18:09:10 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_wcharlen(wchar_t c)
{
	unsigned int	c_len;
	size_t			s_len;

	s_len = 0;
	c_len = (unsigned int)c;
	if (c_len <= 0x7F)
		s_len = 1;
	else if (c_len > 0x7F && c_len <= 0x7FF)
		s_len = 2;
	else if (c_len > 0x7FF && c_len <= 0xFFFF)
		s_len = 3;
	else if (c_len > 0xFFFF && c_len <= 0x10FFFF)
		s_len = 4;
	return (s_len);
}

size_t			ft_wstrlen(wchar_t *s)
{
	size_t	length;

	length = 0;
	while (*s != '\0')
	{
		length += ft_wcharlen(*s);
		s++;
	}
	return (length);
}
