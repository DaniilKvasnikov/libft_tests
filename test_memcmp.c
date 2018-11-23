/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:08:00 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 21:08:02 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	memcmp_test(void *dst, void *src, size_t n)
{
	int	origin;
	int	test;
	int	result;

	origin = memcmp(dst, src, n);
	test = ft_memcmp(dst, src, n);
	result = ft_equal_i(origin, test);
	return (result != 0);
}

void		ft_memcmp_test(void)
{
	if (memcmp_test("123", "124", -1) == 0 &&
//		memcmp_test("123", NULL, -1) == 0 && //Not work
//		memcmp_test(NULL, "123", -1) == 0 && //Not work
//		memcmp_test(NULL, NULL, -1) == 0 && //Not work
		memcmp_test("123", "124", 2) == 0 &&
		memcmp_test("123", "124", 3) == 0 &&
		memcmp_test("123", "1234", 5) == 0 &&
		memcmp_test("123", "456", 3) == 0 &&
		memcmp_test(NULL, NULL, 0) == 0 &&
		memcmp_test("123", NULL, 0) == 0 &&
		memcmp_test(NULL, "123", 0) == 0)
		ft_puts("Norm:	ft_memcpy");
	else
		ft_puts("Error:	ft_memcpy");
}
