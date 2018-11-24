/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:49:04 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:49:05 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strchr_test(char *s1, int s2)
{
	char	*origin;
	char	*test;
	int		result;
	
	origin = strchr(s1, s2);
	test = ft_strchr(s1, s2);
	result = ft_equal_a(origin, test);
	return (result != 0);
}

void		ft_strchr_test(void)
{
	if (strchr_test("123", '2') == 0)
		ft_puts("Norm:	ft_strchr");
	else
		ft_puts("Error:	ft_strchr");
}
