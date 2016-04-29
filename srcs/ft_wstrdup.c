/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:06:46 by cledant           #+#    #+#             */
/*   Updated: 2016/04/29 11:45:41 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

wchar_t		*ft_wstrdup(wchar_t *s1)
{
	size_t	len_s1;
	wchar_t	*cpy_s1;

	len_s1 = 0;
	len_s1 = ft_wlen_strlen(s1);
	cpy_s1 = (wchar_t *)malloc((len_s1 + 1) * sizeof(wchar_t));
	ft_bzero(cpy_s1, (len_s1 + 1) * sizeof(wchar_t));
	if (cpy_s1 != NULL)
		cpy_s1 = ft_wstrcpy(cpy_s1, s1);
	return (cpy_s1);
}
