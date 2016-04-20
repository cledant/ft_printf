/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fill_flag.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 18:59:59 by cledant           #+#    #+#             */
/*   Updated: 2016/04/20 19:06:13 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_fill_flag(char *format, t_flags *data)
{
	if (*format == "#")
		data->sharp = 1;
	else if (*format == "0")
		data->pad_zero = 1;
	else if (*format == "+")
		data->sign = 1;
	else if (*format == "-")
		data->pad_space = 1;
	else if (*format == " ")
		data->space = 1;
}
