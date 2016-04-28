/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mod_precision_str_simple.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 13:35:00 by cledant           #+#    #+#             */
/*   Updated: 2016/04/28 18:48:21 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

wchar_t	*ft_printf_mod_precision_str_w(wchar_t *s, size_t pre_size)
{
	size_t	s_len;
	wchar_t	*new;
	wchar_t	*cpy_new;
	size_t	i;

	if ((s_len = ft_wlen_strlen(s)) >= pre_size)
		return (s);
	i = 0;
	if ((new = ft_wstrnew(pre_size)) == NULL)
		return (NULL);
	cpy_new = new;
	while (i < pre_size)
	{
		*new = *s;
		new++;
		s++;
		i++;
	}
	return (cpy_new);
}
