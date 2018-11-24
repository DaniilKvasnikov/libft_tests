/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:49:28 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:49:29 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strstr_test(char *s1, char *s2)
{
	char	*origin;
	char	*test;
	int		result;
	
	origin = strstr(s1, s2);
	test = ft_strstr(s1, s2);
	result = ft_equal_a(origin, test);
	return (result != 0);
}

void		ft_strstr_test(void)
{
	if (strstr_test("12345", "123") == 0)
		ft_puts("Norm:	ft_strstr");
	else
		ft_puts("Error:	ft_strstr");
}
