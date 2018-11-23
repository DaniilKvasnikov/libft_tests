/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:44:16 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 16:44:19 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	bzero_test(char *src, int len, int delta)
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
	bzero(origin + delta, len);
	ft_bzero(test + delta, len);
	result = ft_equal_a(origin, test);
	free(origin);
	free(test);
	return (result != 0);
}

void		ft_bzero_test(void)
{
	if (bzero_test(NULL, 0, 0) == 0 &&
//		bzero_test(NULL, -1, 0) == 0 && //Not work
//		bzero_test("a\0c", -1, 0) == 0 && //Not work
		bzero_test("a\0c", 1, 1) == 0 &&
		bzero_test("b\0aaaa", 4, 1) == 0 &&
		bzero_test("c123456789", 0, 1) == 0 &&
		bzero_test("d123456789", 9, 1) == 0 &&
		bzero_test("e123456789", 5, 1) == 0 &&
		bzero_test("f123456789", 0, 1) == 0 &&
		bzero_test("", 0, 0) == 0 &&
		bzero_test("g23", 1, 1) == 0)
		ft_puts("Norm:	ft_bzero");
	else
		ft_puts("Error:	ft_bzero");
}
