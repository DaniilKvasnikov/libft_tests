/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:50:36 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:50:37 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	isdigit_test(char s1)
{
	int		result;

	result = ft_equal_i(isdigit(s1), ft_isdigit(s1));
	return (result != 0);
}

void		ft_isdigit_test(void)
{
	if (isdigit_test('0') == 0 &&
		isdigit_test('a') == 0 &&
		isdigit_test(' ') == 0)
		ft_puts("Norm:	ft_isdigit");
	else
		ft_puts("Error:	ft_isdigit");
}
