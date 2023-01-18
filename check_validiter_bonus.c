/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validiter_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 01:53:05 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/16 00:26:52 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	check_validiter(char **str)
{
	int	i;
	int	isit;

	i = 0;
	if (!str[0])
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (str == NULL || str[i] == NULL)
		return ;
	while (str[i] != NULL)
	{
		isit = ft_isdigit(str[i]);
		if (isit == 0)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return ;
}
