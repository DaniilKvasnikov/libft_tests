/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:49:38 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:49:40 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strnstr_test(char *s1, char *s2, int n)
{
	char	*origin;
	char	*test;
	int		result;
	
	origin = strnstr(s1, s2, n);
	test = ft_strnstr(s1, s2, n);
	result = ft_equal_a(origin, test);
	return (result != 0);
}

void		ft_strnstr_test(void)
{
	if (strnstr_test("12345", "123", 2) == 0 &&
		strnstr_test("12345", "23", 5) == 0 &&
		strnstr_test("12345", "123", 1) == 0 &&
		strnstr_test("12345", "123", 2) == 0 &&
		strnstr_test("12345", "123", 3) == 0 &&
		strnstr_test("12345", "123", 4) == 0)
		ft_putendl("Norm:	ft_strnstr");
	else
		ft_putendl("Error:	ft_strnstr");
}
