/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr_long_int.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 12:33:57 by cledant           #+#    #+#             */
/*   Updated: 2016/04/22 12:58:15 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putnbr_long_int(long int n)
{
	long int	tmp;

	tmp = 0;
	if (n == LONG_MIN)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	tmp = n % 10;
	if (n >= 10)
		ft_printf_putnbr_long_int(n / 10);
	ft_putchar(tmp + '0');
}
