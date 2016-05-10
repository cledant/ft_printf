/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 12:38:21 by cledant           #+#    #+#             */
/*   Updated: 2016/05/10 15:33:02 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <locale.h>
#include <stdio.h>
#include <limits.h>

int		ft_printf(const char *format, ...);

int		main(void)
{
	int		me_total;
	int		real_total;
	int		me;
	int		real;
	int		ptr_test = 1234;

	me_total = 0;
	real_total = 0;
	me = 0;
	real = 0;

	setlocale(LC_ALL, "en_US.UTF-8");

	ft_putendl("=============TEST NORMAL===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%d\n", INT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%d\n", INT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%d\n", INT_MIN);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%d\n", INT_MIN);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%i\n", INT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%i\n", INT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%o\n", INT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%o\n", INT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%u\n", INT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%u\n", INT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%x\n", INT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%x\n", INT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%X\n", INT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%X\n", INT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%p\n", &ptr_test);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%p\n", &ptr_test);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%c\n", '6');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%c\n", '6');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%C\n", L'π');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%C\n", L'π');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%s\n", "coucou 42");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%s\n", "coucou 42");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%S\n", L"coucou 42 に");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%S\n", L"coucou 42 に");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%D\n", INT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%D\n", INT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%O\n", UINT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%O\n", UINT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%U\n", UINT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%U\n", UINT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("adresse : %p\n memoire\n", &ptr_test);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("adresse : %p\n memoire\n", &ptr_test);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("adresse : %p\n memoire %d %s\n", &ptr_test, 42, "test");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("adresse : %p\n memoire %d %s\n", &ptr_test, 42, "test");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	return (0);
}
