/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:50:24 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:50:25 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	isalpha_test(char s1)
{
	int		result;

	result = ft_equal_i(isalpha(s1), ft_isalpha(s1));
	return (result != 0);
}

void		ft_isalpha_test(void)
{
	if (isalpha_test('1') == 0)
		ft_puts("Norm:	ft_isalpha");
	else
		ft_puts("Error:	ft_isalpha");
}
