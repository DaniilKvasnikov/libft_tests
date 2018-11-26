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

int	ft_equal_a(char *s1, char *s2)
{
	int		result;

	if (s1 != NULL && s2 != NULL)
		result = ft_strcmp(s1, s2);
	else
	{
		result = !(s1 == NULL && s2 == NULL);
		if (PRINT_LOG == 1)
		{
			(result == 0) ? ft_putendl("Norm:") : ft_putendl("Error:");
			if (s1 == NULL)
				ft_putendl("	origin: NULL");
			else
			{
				ft_putstr("	origin: ");
				ft_putendl(s1);
			}
			if (s2 == NULL)
				ft_putendl("	  test: NULL");
			else
			{
				ft_putstr("	  test: ");
				ft_putendl(s2);
			}
		}
		return (result != 0);
	}
	if (PRINT_LOG == 1)
	{
		(result == 0) ? ft_putendl("Norm:") : ft_putendl("Error:");
		ft_putstr("	origin: ");
		ft_putendl(s1);
		ft_putstr("	  test: ");
		ft_putendl(s2);
	}
	return (result != 0);
}
