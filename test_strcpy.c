/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:43:27 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 23:43:29 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strcpy_test(void *dst, void *src, int delta)
{
	char	*origin;
	char	*test;
	int		result;

	if (dst != NULL)
	{
		origin = ft_strdup(dst);
		test = ft_strdup(dst);
		strcpy(origin + delta, src);
		ft_strcpy(test + delta, src);
	}
	else
	{
		origin = dst;
		test = dst;
		strcpy(origin, src);
		ft_strcpy(test, src);
	}
	result = ft_equal_a(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}

void		ft_strcpy_test(void)
{
	if (strcpy_test("123", "456", 0) == 0 &&
		strcpy_test("123", "", 0) == 0 &&
//		strcpy_test(NULL, NULL, 0) == 0 && //Not work
//		strcpy_test(NULL, NULL, 1) == 0 && //Not work
		strcpy_test("123", "456", 1) == 0 &&
		strcpy_test("123", "456", 1) == 0 &&
		strcpy_test("123", "456", 3) == 0)
		ft_puts("Norm:	ft_strcpy");
	else
		ft_puts("Error:	ft_strcpy");
}
