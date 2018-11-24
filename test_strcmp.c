/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:49:50 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:49:52 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strcmp_test(char *s1, char *s2)
{
	int		result;
	
	result = ft_equal_i(strcmp(s1, s2), ft_strcmp(s1, s2));
	return (result != 0);
}

void		ft_strcmp_test(void)
{
	if (strcmp_test("1234", "12345") == 0)
		ft_puts("Norm:	ft_strcmp");
	else
		ft_puts("Error:	ft_strcmp");
}
