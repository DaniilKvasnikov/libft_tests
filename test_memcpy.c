/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:13:05 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 17:13:07 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	memcpy_test(void *dst, void *src, size_t n, int delta)
{
	char	*origin;
	char	*test;
	int		result;

	if (dst != NULL)
	{
		origin = ft_strdup(dst);
		test = ft_strdup(dst);
		memcpy(origin + delta, src, n);
		ft_memcpy(test + delta, src, n);
	}
	else
	{
		origin = dst;
		test = dst;
		memcpy(origin, src, n);
		ft_memcpy(test, src, n);
	}
	result = ft_equal_a(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}

void		ft_memcpy_test(void)
{
	if (memcpy_test("123", "", 0, 0) == 0 &&
		memcpy_test("123", "", 1, 0) == 0 &&
		memcpy_test("123", "456", 1, 0) == 0 &&
//		memcpy_test("123", "456", -1, 0) == 0 &&
		memcpy_test(NULL, NULL, -1, 0) == 0 &&
		memcpy_test("123", "456", 1, 1) == 0 &&
		memcpy_test("123", "456", 3, 1) == 0 &&
		memcpy_test("123", "456", 3, 3) == 0 &&
		memcpy_test(NULL, NULL, 1, 1) == 0)
		ft_putendl("Norm:	ft_memcpy");
	else
		ft_putendl("Error:	ft_memcpy");
}
