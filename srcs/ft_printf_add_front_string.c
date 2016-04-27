/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_add_space.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 19:13:09 by cledant           #+#    #+#             */
/*   Updated: 2016/04/27 10:53:06 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_printf_add_front_string(char *s, char *s2)
{
	char	*ret;

	ret = ft_strjoin(s, s2);
	ft_strdel(&s2);
	return (ret);
}
