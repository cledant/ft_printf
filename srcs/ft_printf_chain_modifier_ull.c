/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chain_modifier.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 19:59:04 by cledant           #+#    #+#             */
/*   Updated: 2016/04/27 10:29:43 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printf_chain_modifier_ull(char *s, unsigned long long int val,
			t_flags *f)
{
	if ((f->type == 3 || f->type == 4 || f->type == 5) && f->space > 0 &&
			f->sign == 0 && val > 0)
		s = ft_printf_add_front_string(" ", s);
	else if ((f->type == 3 || f->type == 4 || f->type == 5) && f->sign > 0 &&
			val > 0)
		s = ft_printf_add_front_string("+", s);
	else if ((f->type == 6 || f->type == 7) && f->sharp > 0 && val > 0)
		s = ft_printf_add_front_string("0", s);
	else if ((f->type == 9 || f->type == 10) && f->sharp > 0 && val > 0)
		s = ft_printf_add_front_string("0x", s);
	return (s);
}
