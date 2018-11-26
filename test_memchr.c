/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:52:23 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 19:52:25 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	memchr_test(void *dst, int c, size_t n)
{
	char	*origin;
	char	*test;
	int		result;

	if (dst != NULL)
	{
		origin = ft_strdup(dst);
		test = ft_strdup(dst);
	}
	else
	{
		origin = dst;
		test = dst;
	}
	result = ft_equal_a(memchr(origin, c, n), ft_memchr(test, c, n));
	if (dst != NULL)
	{
		free(origin);
		free(test);
	}
	return (result != 0);
}

void		ft_memchr_test(void)
{
	if (memchr_test("123", '2', -1) == 0 &&
//		memchr_test(NULL, '5', -1) == 0 && //Not work
//		memchr_test("123", '0', -1) == 0 && //Not work
		memchr_test("123", '2', 1) == 0 &&
		memchr_test("123", '2', 2) == 0 &&
		memchr_test(NULL, '5', 0) == 0)
		ft_putendl("Norm:	ft_memccpy");
	else
		ft_putendl("Error:	ft_memccpy");
}
