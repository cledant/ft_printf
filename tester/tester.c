/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 12:38:21 by cledant           #+#    #+#             */
/*   Updated: 2016/05/10 12:47:47 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <locale.h>
#include <stdio.h>
#include <limits.h>

int		ft_printf(const char *restrict format, ...);

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

	ft_putendl("=============TEST LL===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lld\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lld\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lli\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lli\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llo\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llo\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llu\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llu\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llx\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llx\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llX\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llX\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llp\n", &ptr_test);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llp\n", &ptr_test);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lls\n", "coucou 42");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lls\n", "coucou 42");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llS\n", L"coucou 42 に");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llS\n", L"coucou 42 に");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llc\n", '6');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llc\n", '6');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llC\n", L'に');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llC\n", L'に');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llD\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llD\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llO\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llO\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%llU\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llU\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putendl("=============TEST L===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%ld\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%ld\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%li\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%li\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lo\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lo\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lu\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lu\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lx\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lx\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lX\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lX\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lp\n", &ptr_test);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lp\n", &ptr_test);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%ls\n", L"coucou 42");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%ls\n", L"coucou 42");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%ls\n", L"coucou 42 に");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%ls\n", L"coucou 42 に");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lc\n", '6');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lc\n", '6');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lc\n", L'に');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lc\n", L'に');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lD\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lD\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lO\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lO\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%lU\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%lU\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

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
	me = ft_printf("%c\n", '6');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%c\n", '6');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%C\n", L'に');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%C\n", L'に');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%D\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%D\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%D\n", LONG_MIN);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%D\n", LONG_MIN);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%O\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%O\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%U\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%U\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putendl("=============TEST H===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hd\n", SHRT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hd\n", SHRT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hd\n", SHRT_MIN);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hd\n", SHRT_MIN);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hi\n", SHRT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hi\n", SHRT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%ho\n", SHRT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%ho\n", SHRT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hu\n", SHRT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hu\n", SHRT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hx\n", SHRT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hx\n", SHRT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hX\n", SHRT_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hX\n", SHRT_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hp\n", &ptr_test);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hp\n", &ptr_test);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hs\n", "coucou 42");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hs\n", "coucou 42");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hS\n", L"coucou 42 に");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%S\n", L"coucou 42 に");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hc\n", '6');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hc\n", '6');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hC\n", L'に');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%C\n", L'に');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hD\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hD\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hD\n", LONG_MIN);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hD\n", LONG_MIN);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hO\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hO\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hU\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hU\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putendl("=============TEST HH===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhd\n", CHAR_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhd\n", CHAR_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhd\n", CHAR_MIN);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhd\n", CHAR_MIN);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhi\n", CHAR_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhi\n", CHAR_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hho\n", CHAR_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hho\n", CHAR_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhu\n", CHAR_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhu\n", CHAR_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhx\n", CHAR_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhx\n", CHAR_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhX\n", CHAR_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhX\n", CHAR_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhp\n", &ptr_test);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhp\n", &ptr_test);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhs\n", "coucou 42");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhs\n", "coucou 42");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhS\n", L"coucou 42 に");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%S\n", L"coucou 42 に");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhc\n", '6');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhc\n", '6');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhC\n", L'に');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%C\n", L'に');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhD\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhD\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhD\n", LONG_MIN);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhD\n", LONG_MIN);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhO\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhO\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%hhU\n", LONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%hhU\n", LONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putendl("=============TEST J===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jd\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%jd\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%ji\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%ji\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jo\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%jo\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%ju\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%ju\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jx\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%jx\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jX\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%jX\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jp\n", &ptr_test);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%jp\n", &ptr_test);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%js\n", "coucou 42");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%js\n", "coucou 42");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jS\n", L"coucou 42 に");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llS\n", L"coucou 42 に");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jc\n", '6');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llc\n", '6');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jC\n", L'に');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llC\n", L'に');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jD\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%jD\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jO\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%jO\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%jU\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%jU\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putendl("=============TEST Z===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zd\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zd\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zi\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zi\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zo\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zo\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zu\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zu\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zx\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zx\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zX\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zX\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zp\n", &ptr_test);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zp\n", &ptr_test);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zs\n", "coucou 42");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zs\n", "coucou 42");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zS\n", L"coucou 42 に");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llS\n", L"coucou 42 に");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zc\n", '6');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zc\n", '6');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zC\n", L'に');
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%llC\n", L'に');
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zD\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zD\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zO\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zO\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%zU\n", LLONG_MAX);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%zU\n", LLONG_MAX);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");


	ft_putendl("=============NON DET===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("%.4S\n", L"coucou 42 に");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("%.4S\n", L"coucou 42 に");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putendl("=============complet===============");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("coucou %d ca va\n", 42);
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("coucou %d ca va\n", 42);
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	ft_putstr("FT_PRINTF : ");
	me = ft_printf("coucou %s ca va\n", "nop");
	me_total += me;
	ft_putnbrendl(me);
	ft_putstr("___PRINTF : ");
	real = printf("coucou %s ca va\n", "nop");
	real_total += real;
	ft_putnbrendl(real);
	ft_putendl("");

	return (0);
}
