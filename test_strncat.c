/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 00:45:16 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/22 00:45:18 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strncat_test(char *s1, char *s2, int n)
{
	char	*origin;
	char	*test;
	int		result;

	if (s1 != NULL)
	{
		origin = strdup(s1);
		test = strdup(s1);
	}
	else
	{
		origin = s1;
		test = s1;
	}
	origin = strncat(origin, s2, n);
	test = ft_strncat(test, s2, n);
	result = ft_equal_a(origin, test);
	return (result != 0);
}

void		ft_strncat_test(void)
{
	if (strncat_test("123", "123", -1) == 0 &&
		strncat_test("123", "123", 0) == 0 &&
		strncat_test("123", "123", 3) == 0 &&
//		strncat_test(NULL, NULL, 0) == 0 && //Not work
		strncat_test("", "", 3) == 0)
		ft_puts("Norm:	ft_strncat");
	else
		ft_puts("Error:	ft_strncat");
}
