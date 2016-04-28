/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mod_precision.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 18:51:39 by cledant           #+#    #+#             */
/*   Updated: 2016/04/28 13:01:21 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printf_mod_precision(char *s, size_t pre_len)
{
	size_t	s_len;
	char	*new;
	char	*cpy_s;
	char	*cpy_new;
	size_t	i;

	if ((s_len = ft_strlen(s)) >= pre_len)
		return (s);
	i = 0;
	cpy_s = s;
	if  (ft_isdigit(*s) == 0)
		s_len--;
	if ((new = ft_strnew(pre_len + 1)) == NULL)
		return (NULL);
	cpy_new = new;
	if  (ft_isdigit(*s) == 0)
	{
		*new = *s;
		new++;
		s++;
	}
	while (i < (pre_len - s_len))
	{
		*new = '0';
		new++;
		i++;
	}
	ft_strcpy(new, s);
	ft_strdel(&cpy_s);
	return (cpy_new);
}
