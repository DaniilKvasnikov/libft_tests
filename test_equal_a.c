/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_equal_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:34:01 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 16:34:03 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

#define PRINT_LOG 1

int	ft_equal_a(char *s1, char *s2)
{
	int		result;

	if (s1 != NULL && s2 != NULL)
		result = ft_strcmp(s1, s2);
	else
		return (!(s1 == NULL && s2 == NULL));
	if (PRINT_LOG == 1)
	{
		(result == 0) ? ft_puts("Norm:") : ft_puts("Error:");
		ft_putstr("origin: ");
		ft_puts(s1);
		ft_putstr("  test: ");
		ft_puts(s2);
	}
	return (result != 0);
}
