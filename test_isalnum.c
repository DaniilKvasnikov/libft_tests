/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:50:49 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:50:51 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	isalnum_test(char s1)
{
	int		result;

	result = ft_equal_i(isalnum(s1), ft_isalnum(s1));
	return (result != 0);
}

void		ft_isalnum_test(void)
{
	if (isalnum_test('0') == 0 &&
		isalnum_test('a') == 0 &&
		isalnum_test(' ') == 0)
		ft_puts("Norm:	ft_isalnum");
	else
		ft_puts("Error:	ft_isalnum");
}
