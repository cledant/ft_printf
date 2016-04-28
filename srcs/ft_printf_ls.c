/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ls.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 17:31:15 by cledant           #+#    #+#             */
/*   Updated: 2016/04/28 18:32:58 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_ls(va_list list_arg, t_flags *flag)
{
	wchar_t		*val;
	wchar_t		*m_val;
	size_t		len;

	val = va_arg(list_arg, wchar_t *);
	if (val == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (*val == '\0')
		return (0);
	if ((m_val = ft_wstrdup(val)) == NULL)
		return (0);
	m_val = ft_printf_chain_modifier_w(m_val, 0, flag);
	ft_wputstr(m_val);
	len = ft_wstrlen(m_val);
	free(m_val);
	return (len);
}
