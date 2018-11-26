/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:30:17 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 23:30:19 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	strdup_test(char *str)
{
	char	*origin;
	char	*test;
	int		result;

	origin = strdup(str);
	test = ft_strdup(str);
	result = ft_equal_a(origin, test);
	return (result != 0);
}

void		ft_strdup_test(void)
{
	if (strdup_test("123") == 0 &&
//		strdup_test(NULL) == 0 && //Not work
		strdup_test("") == 0 &&
		strdup_test("asd\t\0 asd") == 0)
		ft_putendl("Norm:	ft_strdup");
	else
		ft_putendl("Error:	ft_strdup");
}
