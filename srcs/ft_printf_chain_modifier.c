/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chain_modifier.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 19:59:04 by cledant           #+#    #+#             */
/*   Updated: 2016/04/27 19:02:12 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printf_chain_modifier(char *s, long long int val, t_flags *f)
{
	if ((f->type == 3 || f->type == 4 || f->type == 5) && f->space > 0 &&
			f->sign == 0 && val > 0)
		s = ft_printf_add_front_string(" ", s);
	else if ((f->type == 3 || f->type == 4 || f->type == 5) && f->sign > 0 &&
			val > 0)
		s = ft_printf_add_front_string("+", s);
	else if ((f->type == 6 || f->type == 7) && f->sharp > 0 && val > 0)
		s = ft_printf_add_front_string("0", s);
	else if ((f->type == 10 || f->type == 11) && f->sharp > 0 && val > 0)
		s = ft_printf_add_front_string("0x", s);
	if (f->precision == 1 && (f->type >= 3 && f->type <= 11))
		s = ft_printf_mod_precision(s, f->preci_size);
	return (s);
}
