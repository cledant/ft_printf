/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_is_modifier.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 18:42:30 by cledant           #+#    #+#             */
/*   Updated: 2016/04/20 18:45:11 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_is_modifier(char *format)
{
	char	mod[4];
	size_t	i;

	i = 0;
	if (ft_strncmp(format, "hh", 2) == 0)
		return (2);
	else if (ft_strncmp(format, "ll", 2) == 0)
		return (2);
	ft_strcpy(mod, "hljz\0");
	while (i < 4)
	{
		if (*format == mod[i])
			return (1);
		i++;
	}
	return (0);
}
