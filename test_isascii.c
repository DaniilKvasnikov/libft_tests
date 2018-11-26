/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:51:00 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:51:01 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	isascii_test(char s1)
{
	int		result;

	result = ft_equal_i(isascii(s1), ft_isascii(s1));
	return (result != 0);
}

void		ft_isascii_test(void)
{
	if (isascii_test('0') == 0 &&
		isascii_test('a') == 0 &&
		isascii_test(' ') == 0)
		ft_putendl("Norm:	ft_isascii");
	else
		ft_putendl("Error:	ft_isascii");
}
