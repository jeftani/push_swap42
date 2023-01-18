/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:43:14 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/17 14:31:56 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	lst_size(t_list **stacka)
{
	t_list	*temp;
	int		i;

	if (*stacka)
	{
		temp = *stacka;
		i = 0;
		while (temp)
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	return (0);
}

int	check_sort(t_list **stacka, int size)
{
	t_list	*tmp;

	if (!*stacka)
		return (0);
	tmp = *stacka;
	if (size < 2)
		exit(1);
	while (tmp && tmp->next)
	{
		if (tmp->num < tmp->next->num)
			tmp = tmp->next;
		else
		{
			return (0);
		}
	}
	return (1);
}
