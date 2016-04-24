/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr_unsigned.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 17:57:42 by cledant           #+#    #+#             */
/*   Updated: 2016/04/21 18:02:32 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_putnbr_unsigned(unsigned int n)
{
	unsigned int	tmp;

	tmp = 0;
	tmp = n % 10;
	if (n >= 10)
		ft_printf_putnbr_unsigned(n / 10);
	ft_putchar(tmp + '0');
}
