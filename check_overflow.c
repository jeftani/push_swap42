/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:14:04 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/15 22:20:58 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	check_overflow(char **av)
{
	long long	temp;

	if (!av)
		return ;
	while (*av)
	{
		temp = ft_atoill(*av);
		if (temp < INT_MIN || temp > INT_MAX)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		av++;
	}
	return ;
}
