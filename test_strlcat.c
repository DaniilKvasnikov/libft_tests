/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:15:28 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:15:29 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strlcat_test(char *s1, char *s2, int n)
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
	result = ft_equal_i(strlcat(origin, s2, n), ft_strlcat(test, s2, n)) && ft_equal_a(origin, test);
	return (result != 0);
}

static int	strlcat_test_dop(char *s2, int n)
{
	char	*origin;
	char	*test;
	int		result;
	
	origin = (char *)malloc(sizeof(char	*) * 15);
	memset(origin, 0, 15);
	memset(origin, 'r', 6);
	test = (char *)malloc(sizeof(char	*) * 15);
	memset(test, 0, 15);
	memset(test, 'r', 6);

	result = ft_equal_i(strlcat(origin, s2, n), ft_strlcat(test, s2, n)) && ft_equal_a(origin, test);
	return (result != 0);
}

void		ft_strlcat_test(void)
{
	if (strlcat_test("123", "123", 1) == 0 &&
		strlcat_test("123", "", 1) == 0 &&
		strlcat_test_dop("123", 4) == 0)
		ft_puts("Norm:	ft_strlcat");
	else
		ft_puts("Error:	ft_strlcat");
}
