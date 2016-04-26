/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chain_modifier.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 19:59:04 by cledant           #+#    #+#             */
/*   Updated: 2016/04/26 20:07:04 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printf_chain_modifier(char *s, long long int val, t_flags *f)
{
	if ((f->type == 3 || f->type == 4 || f->type == 5) && f->space > 0 &&
			f->sign == 0)
		s = ft_printf_add_front_char(s, val, ' ');
	else if ((f->type == 3 || f->type == 4 || f->type == 5) && f->sign > 0)
		s = ft_printf_add_front_char(s, val, '+');
	return (s);
}
