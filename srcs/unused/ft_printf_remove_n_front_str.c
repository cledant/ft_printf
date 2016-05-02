/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_add_space.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 19:13:09 by cledant           #+#    #+#             */
/*   Updated: 2016/05/02 14:14:11 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_printf_remove_n_front_str(char *s, size_t n)
{
	char	*ret;
	size_t	len;
	int		test;

	len = ft_strlen(s);
	if ((test = len - n) < 0)
		len = 0;
	else
		len -= n ;
	if ((ret = ft_strnew(len - n)) == NULL)
		return (s);
	ft_strcpy(ret, s + 1);
	ft_strdel(&s);
	return (ret);
}
