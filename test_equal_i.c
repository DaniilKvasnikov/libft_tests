/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_equal_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:36:12 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 21:36:14 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	ft_equal_i(int p1, int p2)
{
	int		result;

	result = (p1 != p2);
	if (PRINT_LOG == 1)
	{
		(result == 0) ? ft_putendl("Norm:") : ft_putendl("Error:");
		ft_putstr("	origin: ");
		ft_putnbr(p1);
		ft_putendl("");
		ft_putstr("	  test: ");
		ft_putnbr(p2);
		ft_putendl("");
	}
	return (result != 0);
}
