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
	if (atoi_test("12345") == 0)
		ft_puts("Norm:	ft_atoi");
	else
		ft_puts("Error:	ft_atoi");
}
