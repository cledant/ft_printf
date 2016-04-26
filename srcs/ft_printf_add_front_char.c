/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_add_space.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 19:13:09 by cledant           #+#    #+#             */
/*   Updated: 2016/04/26 19:36:33 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_printf_add_front_char(char *s, long long int val, char c)
{
	size_t	len;
	char	*s_2;
	char	*cpy_s_2;

	if (val < 0)
		return (s);
	else
	{
		len = ft_strlen(s);
		if ((s_2 = ft_strnew(len + 1)) == NULL)
			return (s);
		cpy_s_2 = s_2;
		*s_2 = c;
		s_2++;
		if (s)
		{
			ft_strcpy(s_2, s);
			ft_strdel(&s);
		}
		return (cpy_s_2);
	}
}
