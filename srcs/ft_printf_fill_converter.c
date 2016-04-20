/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fill_converter.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 19:16:12 by cledant           #+#    #+#             */
/*   Updated: 2016/04/20 19:17:05 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_fill_modifier(char *format, t_flags *data)
{
	if (*format == "s")
		data->type = 0 ;
	else if (*format == "S")
		data->type = 1;
	else if (*format == "p")
		data->type = 2;
	else if (*format == "d")
		data->type = 3;
	else if (*format == "D")
		data->type = 4;
	else if (*format == "i")
		data->type = 5;
	else if (*format == "o")
		data->type = 6;
	else if (*format == "O")
		data->type = 7;
	else if (*format == "u")
		data->type = 8;
	else if (*format == "U")
		data->type = 9;
	else if (*format == "x")
		data->type = 10;
	else if (*format == "X")
		data->type = 11;
	else if (*format == "c")
		data->type = 12;
	else if (*format == "C")
		data->type = 13;
}
