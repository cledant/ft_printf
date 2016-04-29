/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mod_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 16:26:33 by cledant           #+#    #+#             */
/*   Updated: 2016/04/29 18:31:48 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printf_mod_size_zero_hex(char *s, size_t size_len)
{
	size_t	s_len;
	char	*new;
	char	*cpy_new;
	size_t	i;

	if ((s_len = ft_strlen(s)) >= size_len)
	{
		if ((new = ft_strnew(size_len)) == NULL)
			return (NULL);
		cpy_new = new;
		ft_strcpy(new, s);
		cpy_new = ft_printf_add_front_string("0x", cpy_new);
		ft_strdel(&s);
		return (cpy_new);
	}
	i = 0;
	if ((new = ft_strnew(size_len)) == NULL)
		return (NULL);
	cpy_new = new;
	while (i < (size_len - s_len - 1))
	{
		*new = '0';
		new++;
		i++;
	}
	cpy_new = ft_printf_add_front_string("0x", cpy_new);
	ft_strcpy(new, s);
	ft_strdel(&s);
	return (cpy_new);
}
