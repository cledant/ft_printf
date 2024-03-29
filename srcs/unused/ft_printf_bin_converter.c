/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bin_converter.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 16:24:27 by cledant           #+#    #+#             */
/*   Updated: 2016/04/24 16:25:37 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t		ft_len_bin(unsigned int n)
{
	size_t			len;

	len = 0;
	while (n != 0)
	{
		n = n / 2;
		len++;
	}
	return (len);
}

static void			ft_conv_bin(unsigned int n, char *ret, size_t len)
{
	unsigned int	cpy_n;

	cpy_n = n;
	while (cpy_n != 0)
	{
		cpy_n = cpy_n % 2;
		ret[len - 1] = cpy_n + '0';
		n = n / 2;
		cpy_n = n;
		len--;
	}
}

char				*ft_printf_bin_converter(unsigned int n)
{
	char	*ret;
	size_t	len;

	len = ft_len_bin(n);
	if (n == 0)
	{
		if ((ret = ft_strnew(1)) == NULL)
			return (NULL);
		ret[0] = '0';
		return (ret);
	}
	if ((ret = ft_strnew(len)) == NULL)
		return (NULL);
	ft_conv_bin(n , ret, len);
	return (ret);
}
