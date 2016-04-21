/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:21:49 by cledant           #+#    #+#             */
/*   Updated: 2016/04/21 17:25:26 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_print_args(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->type == 3)
		len = ft_printf_d(list_arg);
	else if (flag->type == 5)
		len = ft_printf_d(list_arg);
	else if (flag->type == 8)
		len = ft_printf_u(list_arg);
	return len;
}
