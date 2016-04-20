/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_setup_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 18:29:24 by cledant           #+#    #+#             */
/*   Updated: 2016/04/20 20:02:23 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf_setup_data(char *data, t_flags *flag)
{
	char	*cpy_data;

	cpy_data = data;
	if (ft_strncmp(cpy_data, "%", 1) == 0)
	{
		flag->double_pc = 1;
		return ;
	}
	while (*cpy_data != '\0' && ft_printf_is_flag(cpy_data) == 1)
	{
		ft_printf_fill_flag(cpy_data, flag);
		cpy_data++;
	}
	if (*cpy_data != '\0' && ft_isdigit(*cpy_data) == 1)
	{
		flag->pad_size = ft_atoi(cpy_data);
		while (*cpy_data != '\0' && ft_isdigit(*cpy_data) == 1)
			cpy_data++;
	}
	if (*cpy_data != '\0' && ft_strncmp(cpy_data, ".", 1) == 0)
		flag->precision = 1;
	if (*cpy_data != '\0' && ft_isdigit(*cpy_data) == 1)
	{
		flag->preci_size = ft_atoi(cpy_data);
		while (*cpy_data != '\0' && ft_isdigit(*cpy_data) == 1)
			cpy_data++;
	}
	while (*cpy_data != '\0' && ft_printf_is_modifier(cpy_data) > 0)
	{
		ft_printf_fill_modifier(cpy_data, flag);
		cpy_data++;
	}
	if (*cpy_data != '\0' && ft_printf_is_converter(cpy_data) == 1)
		ft_printf_fill_converter(cpy_data, flag);
}
