/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 07:40:05 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/13 15:14:28 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	maximum(t_list *stacka)
{
	int	max;

	if (!stacka)
		return (0);
	max = stacka->num;
	while (stacka)
	{
		if (max < stacka->num)
			max = stacka->num;
		stacka = stacka->next;
	}
	return (max);
}

int	minimum(t_list *stacka)
{
	int	min;

	if (!stacka)
		return (0);
	min = stacka->num;
	while (stacka)
	{
		if (min > stacka->num)
			min = stacka->num;
		stacka = stacka->next;
	}
	return (min);
}
