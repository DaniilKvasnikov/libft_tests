/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 00:45:09 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/22 00:45:11 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strcat_test(char *s1, char *s2)
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
	origin = strcat(origin, s2);
	test = ft_strcat(test, s2);
	result = ft_equal_a(origin, test);
	return (result != 0);
}

void		ft_strcat_test(void)
{
	if (strcat_test("123", "123") == 0 &&
//		strcat_test(NULL, NULL) == 0 && //Not work
		strcat_test("", "") == 0)
		ft_puts("Norm:	ft_strcat");
	else
		ft_puts("Error:	ft_strcat");
}
