/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:21:05 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 23:21:07 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strlen_test(char *str)
{
	int	origin;
	int	test;
	int	result;

	origin = strlen(str);
	test = ft_strlen(str);
	result = ft_equal_i(origin, test);
	return (result != 0);
}

void		ft_strlen_test(void)
{
	if (strlen_test("123") == 0 &&
		strlen_test("") == 0 &&
		strlen_test("asd\t\0 asd") == 0)
		ft_puts("Norm:	ft_strlen");
	else
		ft_puts("Error:	ft_strlen");
}
