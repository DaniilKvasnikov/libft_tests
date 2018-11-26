/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:51:38 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:51:40 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	toupper_test(char s1)
{
	int		result;

	result = ft_equal_i(toupper(s1), ft_toupper(s1));
	return (result != 0);
}

void		ft_toupper_test(void)
{
	if (toupper_test('1') == 0 &&
		toupper_test('A') == 0 &&
		toupper_test('a') == 0)
		ft_putendl("Norm:	ft_toupper");
	else
		ft_putendl("Error:	ft_toupper");
}
