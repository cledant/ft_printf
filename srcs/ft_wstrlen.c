/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 16:14:44 by cledant           #+#    #+#             */
/*   Updated: 2016/04/25 12:17:27 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
