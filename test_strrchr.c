/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:49:17 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:49:19 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strrchr_test(char *s1, int s2)
{
	char	*origin;
	char	*test;
	int		result;
	
	origin = strrchr(s1, s2);
	test = ft_strrchr(s1, s2);
	result = ft_equal_a(origin, test);
	return (result != 0);
}

void		ft_strrchr_test(void)
{
	if (strrchr_test("123", '2') == 0 &&
		strrchr_test("123", '4') == 0)
		ft_puts("Norm:	ft_strrchr");
	else
		ft_puts("Error:	ft_strrchr");
}
