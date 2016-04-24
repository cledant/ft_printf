/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_be_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:05:15 by cledant           #+#    #+#             */
/*   Updated: 2015/12/16 17:32:13 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_can_be_atoi(char *c)
{
	while (ft_isspace(*c) == 1)
		c++;
	if (*c == '+' || *c == '-')
	{
		c++;
		if (*c >= '0' && *c <= '9')
			return (1);
		else
			return (0);
	}
	else if (*c >= '0' && *c <= '9')
		return (1);
	else
		return (0);
}