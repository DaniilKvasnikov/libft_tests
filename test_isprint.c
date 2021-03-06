/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:51:11 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:51:15 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	isprint_test(char s1)
{
	int		result;

	result = ft_equal_i(isprint(s1), ft_isprint(s1));
	return (result != 0);
}

void		ft_isprint_test(void)
{
	if (isprint_test('0') == 0 &&
		isprint_test('a') == 0 &&
		isprint_test(' ') == 0 &&
		isprint_test('s') == 0)
		ft_putendl("Norm:	ft_isprint");
	else
		ft_putendl("Error:	ft_isprint");
}
