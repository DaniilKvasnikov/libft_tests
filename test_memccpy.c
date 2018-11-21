/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:55:17 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 17:55:19 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	memccpy_test(void *dst, void *src, int c, size_t n, int delta)
{
	char	*origin;
	char	*test;
	int		result;

	if (dst != NULL)
	{
		origin = ft_strdup(dst);
		test = ft_strdup(dst);
		result = ft_equal_a(memccpy(origin + delta, src, c, n),
							ft_memccpy(test + delta, src, c, n));
	}
	else
	{
		origin = dst;
		test = dst;
		result = ft_equal_a(memccpy(origin, src, c, n),
							ft_memccpy(test + delta, src, c, n));
	}
	result = result && ft_equal_a(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}

void		ft_memccpy_test(void)
{
	if (memccpy_test("123", "456", '5', 1, 0) == 0 &&
		memccpy_test("123", "456", '5', 2, 0) == 0 &&
		memccpy_test("123", "456", '5', 3, 1) == 0 &&
		memccpy_test(NULL, NULL, '5', 0, 0) == 0)
		ft_puts("Norm:	ft_memccpy");
	else
		ft_puts("Error:	ft_memccpy");
}
