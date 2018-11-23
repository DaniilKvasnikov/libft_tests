/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:24:42 by rrhaenys          #+#    #+#             */
/*   Updated: 2018/11/21 16:24:43 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../libft/libft.h"
# include <string.h>

# define PRINT_LOG 0

int		ft_equal_a(char *s1, char *s2);
int		ft_equal_i(int p1, int p2);
void	ft_memset_test(void);
void	ft_bzero_test(void);
void	ft_memcpy_test(void);
void	ft_memccpy_test(void);
void	ft_memmove_test(void);
void	ft_memchr_test(void);
void	ft_memcmp_test(void);
void	ft_strlen_test(void);
void	ft_strdup_test(void);
void	ft_strcpy_test(void);
void	ft_strncpy_test(void);
void	ft_strcat_test(void);
void	ft_strncat_test(void);

#endif
