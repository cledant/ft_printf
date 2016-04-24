/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wputchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 20:03:42 by cledant           #+#    #+#             */
/*   Updated: 2016/04/24 20:47:29 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_size_2(wchar_t c)
{
	
}

void		ft_wputchar(wchar_t c)
{
	unsigned int	conv;
	size_t			len;

	size = ft_wstrlen(&c);
	if (size == 1)
	{
		conv = (char)c;
		write(1, &conv, 1);
	}
	else if (size == 2)
		ft_size_2(c);
}
