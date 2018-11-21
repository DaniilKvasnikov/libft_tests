/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:23:58 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 16:24:01 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	memset_test(char *src, int c, int len, int delta)
{
	char	*origin;
	char	*test;
	int		result;

	if (src != NULL)
	{
		origin = ft_strdup(src);
		test = ft_strdup(src);
	}
	else
	{
		origin = src;
		test = src;
	}
	memset(origin + delta, c, len);
	ft_memset(test + delta, c, len);
	result = ft_equal_a(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}

void		ft_memset_test(void)
{
	if (memset_test(NULL, '\0', 0, 0) == 0 &&
		memset_test("a\0c", '2', 1, 1) == 0 &&
		memset_test("b\0aaaa", '2', 4, 0) == 0 &&
		memset_test("c123456789", '\0', 0, 0) == 0 &&
		memset_test("d123456789", '\0', 10, 0) == 0 &&
		memset_test("e123456789", '$', 5, 0) == 0 &&
		memset_test("f123456789", '$', 0, 0) == 0 &&
		memset_test("", '$', 0, 0) == 0 &&
		memset_test("g23", 010045, 1, 0) == 0)
		ft_puts("Norm:	ft_memset");
	else
		ft_puts("Error:	ft_memset");
}
