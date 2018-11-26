/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 00:05:48 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/22 00:05:50 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strncpy_test(void *dst, void *src, size_t n, int delta)
{
	char	*origin;
	char	*test;
	int		result;

	if (dst != NULL)
	{
		origin = ft_strdup(dst);
		test = ft_strdup(dst);
		strncpy(origin + delta, src, n);
		ft_strncpy(test + delta, src, n);
	}
	else
	{
		origin = dst;
		test = dst;
		strncpy(origin, src, n);
		ft_strncpy(test, src, n);
	}
	result = ft_equal_a(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}

void		ft_strncpy_test(void)
{
	if (strncpy_test("123", "", 0, 0) == 0 &&
		strncpy_test("123", "", 1, 0) == 0 &&
		strncpy_test("123", "456", 1, 0) == 0 &&
//		strncpy_test("123", "456", -1, 0) == 0 &&
//		strncpy_test(NULL, NULL, -1, 0) == 0 &&
//		strncpy_test(NULL, NULL, 1, 1) == 0 &&
		strncpy_test("123", "456", 1, 1) == 0 &&
		strncpy_test("123", "456", 3, 1) == 0 &&
		strncpy_test("123", "456", 3, 3) == 0)
		ft_putendl("Norm:	ft_strncpy");
	else
		ft_putendl("Error:	ft_strncpy");
}
