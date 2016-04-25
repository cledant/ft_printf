/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:21:49 by cledant           #+#    #+#             */
/*   Updated: 2016/04/25 17:55:33 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_length_1(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->type == 0)
		len = ft_printf_ls(list_arg);
	else if (flag->type == 3)
		len = ft_printf_ld(list_arg);
	else if (flag->type == 5)
		len = ft_printf_ld(list_arg);
	else if (flag->type == 6)
		len = ft_printf_lo(list_arg);
	else if (flag->type == 8)
		len = ft_printf_lu(list_arg);
	else if (flag->type == 10)
		len = ft_printf_lxX(list_arg, 0);
	else if (flag->type == 11)
		len = ft_printf_lxX(list_arg, 1);
	else if (flag->type == 12)
		len = ft_printf_lc(list_arg);
	return (len);
}

static int		ft_length_0(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->type == 0)
		len = ft_printf_s(list_arg);
	else if (flag->type == 1)
		len = ft_printf_ls(list_arg);
	else if (flag->type == 3)
		len = ft_printf_d(list_arg);
	else if (flag->type == 4)
		len = ft_printf_ld(list_arg);
	else if (flag->type == 5)
		len = ft_printf_d(list_arg);
	else if (flag->type == 6)
		len = ft_printf_o(list_arg);
	else if (flag->type == 7)
		len = ft_printf_lo(list_arg);
	else if (flag->type == 8)
		len = ft_printf_u(list_arg);
	else if (flag->type == 9)
		len = ft_printf_lu(list_arg);
	else if (flag->type == 10)
		len = ft_printf_xX(list_arg, 0);
	else if (flag->type == 11)
		len = ft_printf_xX(list_arg, 1);
	else if (flag->type == 12)
		len = ft_printf_c(list_arg);
	else if (flag->type == 13)
		len = ft_printf_lc(list_arg);
	return (len);
}

int				ft_printf_print_args(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
//	ft_putnbrendl_fd(flag->length, 2);
	if (flag->length == 0)
		len = ft_length_0(flag, list_arg);
	else if (flag->length == 1)
		len = ft_length_1(flag, list_arg);
	return (len);
}
