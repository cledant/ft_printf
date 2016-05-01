/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:21:49 by cledant           #+#    #+#             */
/*   Updated: 2016/05/01 19:06:53 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_length_2(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->type == 0)
		len = ft_printf_ls(list_arg, flag);
	else if (flag->type == 2)
		len = ft_printf_p(list_arg, flag);
	else if (flag->type == 3)
		len = ft_printf_lld(list_arg, flag);
	else if (flag->type == 4)
		len = ft_printf_lld(list_arg, flag);
	else if (flag->type == 5)
		len = ft_printf_lld(list_arg, flag);
	else if (flag->type == 6)
		len = ft_printf_llo(list_arg, flag);
	else if (flag->type == 7)
		len = ft_printf_llo(list_arg, flag);
	else if (flag->type == 8)
		len = ft_printf_llu(list_arg, flag);
	else if (flag->type == 9)
		len = ft_printf_llu(list_arg, flag);
	else if (flag->type == 10)
		len = ft_printf_llxX(list_arg, 0, flag);
	else if (flag->type == 11)
		len = ft_printf_llxX(list_arg, 1, flag);
	else if (flag->type == 12)
		len = ft_printf_lc(list_arg, flag);
	return (len);
}

static int		ft_length_1(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->type == 0)
		len = ft_printf_ls(list_arg, flag);
	else if (flag->type == 2)
		len = ft_printf_p(list_arg, flag);
	else if (flag->type == 3)
		len = ft_printf_ld(list_arg, flag);
	else if (flag->type == 4)
		len = ft_printf_ld(list_arg, flag);
	else if (flag->type == 5)
		len = ft_printf_ld(list_arg, flag);
	else if (flag->type == 6)
		len = ft_printf_lo(list_arg, flag);
	else if (flag->type == 7)
		len = ft_printf_lo(list_arg, flag);
	else if (flag->type == 8)
		len = ft_printf_lu(list_arg, flag);
	else if (flag->type == 9)
		len = ft_printf_lu(list_arg, flag);
	else if (flag->type == 10)
		len = ft_printf_lxX(list_arg, 0, flag);
	else if (flag->type == 11)
		len = ft_printf_lxX(list_arg, 1, flag);
	else if (flag->type == 12)
		len = ft_printf_lc(list_arg, flag);
	return (len);
}

static int		ft_length_0(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->type == 0)
		len = ft_printf_s(list_arg, flag);
	else if (flag->type == 1)
		len = ft_printf_ls(list_arg, flag);
	else if (flag->type == 2)
		len = ft_printf_p(list_arg, flag);
	else if (flag->type == 3)
		len = ft_printf_d(list_arg, flag);
	else if (flag->type == 4)
		len = ft_printf_ld(list_arg, flag);
	else if (flag->type == 5)
		len = ft_printf_d(list_arg, flag);
	else if (flag->type == 6)
		len = ft_printf_o(list_arg, flag);
	else if (flag->type == 7)
		len = ft_printf_lo(list_arg, flag);
	else if (flag->type == 8)
		len = ft_printf_u(list_arg, flag);
	else if (flag->type == 9)
		len = ft_printf_lu(list_arg, flag);
	else if (flag->type == 10)
		len = ft_printf_xX(list_arg, 0, flag);
	else if (flag->type == 11)
		len = ft_printf_xX(list_arg, 1, flag);
	else if (flag->type == 12)
		len = ft_printf_c(list_arg, flag);
	else if (flag->type == 13)
		len = ft_printf_lc(list_arg, flag);
	return (len);
}

static int		ft_length_minus_1(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->type == 0)
		len = ft_printf_s(list_arg, flag);
	else if (flag->type == 1)
		len = ft_printf_ls(list_arg, flag);
	else if (flag->type == 2)
		len = ft_printf_p(list_arg, flag);
	else if (flag->type == 3)
		len = ft_printf_hd(list_arg, flag);
	else if (flag->type == 4)
		len = ft_printf_hD(list_arg, flag);
	else if (flag->type == 5)
		len = ft_printf_hd(list_arg, flag);
	else if (flag->type == 6)
		len = ft_printf_ho(list_arg, flag);
	else if (flag->type == 7)
		len = ft_printf_ho(list_arg, flag);
	else if (flag->type == 8)
		len = ft_printf_hu(list_arg, flag);
	else if (flag->type == 9)
		len = ft_printf_lu(list_arg, flag);
	else if (flag->type == 10)
		len = ft_printf_hxX(list_arg, 0, flag);
	else if (flag->type == 11)
		len = ft_printf_hxX(list_arg, 1, flag);
	else if (flag->type == 12)
		len = ft_printf_c(list_arg, flag);
	else if (flag->type == 13)
		len = ft_printf_lc(list_arg, flag);
	return (len);
}

static int		ft_length_minus_2(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->type == 0)
		len = ft_printf_s(list_arg, flag);
	else if (flag->type == 1)
		len = ft_printf_ls(list_arg, flag);
	else if (flag->type == 2)
		len = ft_printf_p(list_arg, flag);
	else if (flag->type == 3)
		len = ft_printf_hhd(list_arg, flag);
	else if (flag->type == 4)
		len = ft_printf_ld(list_arg, flag);
	else if (flag->type == 5)
		len = ft_printf_hhd(list_arg, flag);
	else if (flag->type == 6)
		len = ft_printf_hho(list_arg, flag);
	else if (flag->type == 7)
		len = ft_printf_lo(list_arg, flag);
	else if (flag->type == 8)
		len = ft_printf_hhu(list_arg, flag);
	else if (flag->type == 9)
		len = ft_printf_lu(list_arg, flag);
	else if (flag->type == 10)
		len = ft_printf_hhxX(list_arg, 0, flag);
	else if (flag->type == 11)
		len = ft_printf_hhxX(list_arg, 1, flag);
	else if (flag->type == 12)
		len = ft_printf_c(list_arg, flag);
	else if (flag->type == 13)
		len = ft_printf_lc(list_arg, flag);
	return (len);
}

int				ft_printf_print_args(t_flags *flag, va_list list_arg)
{
	int		len;

	len = 0;
	if (flag->length == 0)
		len = ft_length_0(flag, list_arg);
	else if (flag->length == 1 || flag->length == 10 || flag->length == 20)
		len = ft_length_1(flag, list_arg);
	else if (flag->length == 2)
		len = ft_length_2(flag, list_arg);
	else if (flag->length == -1)
		len = ft_length_minus_1(flag, list_arg);
	else if (flag->length == -2)
		len = ft_length_minus_2(flag, list_arg);
	return (len);
}
