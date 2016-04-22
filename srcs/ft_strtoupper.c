/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 10:27:53 by cledant           #+#    #+#             */
/*   Updated: 2016/04/22 10:31:25 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_strtoupper(char *s)
{
	while (*s != '\0')
	{
		if (ft_isalpha(*s) == 1)
			*s = ft_toupper(*s);
		s++;
	}
}
