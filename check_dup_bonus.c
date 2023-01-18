/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:12:10 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/16 02:10:43 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	check_dup(char **av)
{
	int	i;
	int	j;

	if (!av)
		return ;
	i = 0;
	while (av[i])
	{
		j = 0;
		while (j < i)
		{
			if ((ft_strcmp(av[i], av[j]) == 0)
				|| ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}
