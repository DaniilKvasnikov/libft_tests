/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:54:38 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/20 16:54:40 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

#define PRINT_LOG 0

static int	ft_equal(char *s1, char *s2)
{
	int		result;
	result = ft_strcmp(s1, s2);
	if (PRINT_LOG == 1)
	{
		(result == 0) ? ft_puts("Norm:") : ft_puts("Error:");
		ft_putstr("origin: ");
		ft_puts(s1);
		ft_putstr("  test: ");
		ft_puts(s2);
	}
	return (result != 0);
}

int	ft_memset_test(char *src, int c, int len, int delta)
{
	char	*origin;
	char	*test;
	int		result;

	origin = ft_strdup(src);
	test = ft_strdup(src);
	memset(origin + delta, c, len);
	ft_memset(test + delta, c, len);
	result = ft_equal(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}

int	ft_bzero_test(char *src, int len, int delta)
{
	char	*origin;
	char	*test;
	int		result;

	origin = ft_strdup(src);
	test = ft_strdup(src);
	bzero(origin + delta, len);
	ft_bzero(test + delta, len);
	result = ft_equal(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}


int	main(void)
{
	if (
		ft_memset_test("a\0c",			'2',	1,	1)	== 0 &&
		ft_memset_test("b\0aaaa",		'2',	4,	0)	== 0 &&
		ft_memset_test("c123456789",	'\0',	0,	0)	== 0 &&
		ft_memset_test("d123456789",	'\0',	10,	0)	== 0 &&
		ft_memset_test("e123456789",	'$',	5,	0)	== 0 &&
		ft_memset_test("f123456789",	'$',	0,	0)	== 0 &&
		ft_memset_test("",				'$',	0,	0)	== 0 &&
		ft_memset_test("g23",			010045,	1,	0)	== 0
		)
		ft_puts("Norm:	ft_memset");
	else
		ft_puts("Error:	ft_memset");
	
	if (
		ft_bzero_test("a\0c",		1,	1)	== 0 &&
		ft_bzero_test("b\0aaaa",	4,	0)	== 0 &&
		ft_bzero_test("c123456789",	0,	0)	== 0 &&
		ft_bzero_test("d123456789",	10,	0)	== 0 &&
		ft_bzero_test("e123456789",	5,	0)	== 0 &&
		ft_bzero_test("f123456789",	0,	0)	== 0 &&
		ft_bzero_test("",			0,	0)	== 0 &&
		ft_bzero_test("g23",		1,	0)	== 0
		)
		ft_puts("Norm:	ft_bzero");
	else
		ft_puts("Error:	ft_bzero");

	return (0);
}
