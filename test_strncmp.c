/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:50:00 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/24 06:50:02 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strncmp_test(char *s1, char *s2, int n)
{
	int		result;
	
	result = ft_equal_i(strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
	return (result != 0);
}

void		ft_strncmp_test(void)
{
	if (strncmp_test("1234", "12345", 4) == 0 &&
		strncmp_test("123", "1334", 3) == 0)
		ft_putendl("Norm:	ft_strncmp");
	else
		ft_putendl("Error:	ft_strncmp");
}
