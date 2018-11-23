/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:15:15 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 19:15:18 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	memmove_test(void *dst, void *src, size_t n, int delta)
{
	char	*origin;
	char	*test;
	int		result;

	if (dst != NULL)
	{
		origin = ft_strdup(dst);
		test = ft_strdup(dst);
		memmove(origin + delta, src, n);
		ft_memmove(test + delta, src, n);
	}
	else
	{
		origin = dst;
		test = dst;
		memmove(origin, src, n);
		ft_memmove(test, src, n);
	}
	result = ft_equal_a(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}

void		ft_memmove_test(void)
{
	char *test;

	test = ft_strdup("123456");
	if (memmove_test(test, test + 2, 4, 0) == 0 &&
		memmove_test("a23", "456", 1, 0) == 0 &&
//		memmove_test("a23", "456", -1, 0) == 0 && //Not work
		memmove_test("b23", "456", 1, 1) == 0 &&
		memmove_test("c23", "456", 3, 1) == 0 &&
		memmove_test("d23", "456", 3, 3) == 0 &&
		memmove_test("123", NULL, 0, 0) == 0 &&
//		memmove_test(NULL, NULL, -1, 0) == 0 &&
		memmove_test(NULL, "456", 0, 0) == 0)
		ft_puts("Norm:	ft_memmove");
	else
		ft_puts("Error:	ft_memmove");
}
