/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:51:52 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:51:54 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	tolower_test(char s1)
{
	int		result;

	result = ft_equal_i(tolower(s1), ft_tolower(s1));
	return (result != 0);
}

void		ft_tolower_test(void)
{
	if (tolower_test('1') == 0)
		ft_puts("Norm:	ft_tolower");
	else
		ft_puts("Error:	ft_tolower");
}
