/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mod_precision.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 18:51:39 by cledant           #+#    #+#             */
/*   Updated: 2016/04/27 19:02:50 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printf_mod_precision(char *s, size_t pre_len)
{
	size_t	s_len;
	char	*new;
	char	*cpy_new;
	size_t	i;

	i = 0;
	if ((s_len = ft_strlen(s)) >= pre_len)
		return (s);
	if ((new = ft_strnew(pre_len)) == NULL)
		return (NULL);
	cpy_new = new;
	while (i < (pre_len - s_len))
	{
		*new = '0';
		new++;
		i++;
	}
	ft_strcpy(new, s);
	ft_strdel(&s);
	return (cpy_new);
}
