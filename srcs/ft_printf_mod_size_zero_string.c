/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mod_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 16:26:33 by cledant           #+#    #+#             */
/*   Updated: 2016/05/02 21:37:09 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printf_mod_size_zero_string(char *s, size_t size_len)
{
	size_t	s_len;
	char	*new;
	char	*cpy_s;
	char	*cpy_new;
	size_t	i;

	if ((s_len = ft_strlen(s)) >= size_len)
		return (s);
	i = 0;
	cpy_s = s;
	if ((new = ft_strnew(size_len)) == NULL)
		return (NULL);
	cpy_new = new;
	if (ft_isascii(*s) == 0 && *s != '\0')
	{
		*new = *s;
		new++;
		s++;
	}
	while (i < (size_len - s_len))
	{
		*new = '0';
		new++;
		i++;
	}
	ft_strcpy(new, s);
	ft_strdel(&cpy_s);
	return (cpy_new);
}
