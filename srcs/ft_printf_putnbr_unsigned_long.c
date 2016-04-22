/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr_unsigned_long.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 13:48:20 by cledant           #+#    #+#             */
/*   Updated: 2016/04/22 13:48:22 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_putnbr_unsigned_long_int(unsigned long int n)
{
	unsigned long int	tmp;

	tmp = 0;
	tmp = n % 10;
	if (n >= 10)
		ft_printf_putnbr_unsigned_long_int(n / 10);
	ft_putchar(tmp + '0');
}
