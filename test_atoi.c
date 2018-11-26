/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:50:11 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:50:13 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	atoi_test(char *s1)
{
	int		result;

	result = ft_equal_i(atoi(s1), ft_atoi(s1));
	return (result != 0);
}

void		ft_atoi_test(void)
{
	if (atoi_test("+548") == 0 &&
		atoi_test("12345") == 0 &&
		atoi_test("0") == 0 &&
		atoi_test("2147483646") == 0 &&
		atoi_test("-2147483647") == 0 &&
		atoi_test("9999999999999999999") == 0 &&
		atoi_test("-9999999999999999999") == 0 &&
		atoi_test("999999999999999999") == 0 &&
		atoi_test("-999999999999999999") == 0 &&
		atoi_test("99999999999999999") == 0 &&
		atoi_test("-99999999999999999") == 0)
		ft_putendl("Norm:	ft_atoi");
	else
		ft_putendl("Error:	ft_atoi");
}
