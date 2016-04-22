/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_unicode.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 16:46:09 by cledant           #+#    #+#             */
/*   Updated: 2016/04/22 17:25:30 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_unicode(wchar_t *s)
{
	size_t length;

	length = 0;
	while (*s != '\0')
	{
		length += sizeof(*s);
		s++;
	}
	return (length);
}
