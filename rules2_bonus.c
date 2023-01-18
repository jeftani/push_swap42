/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:51:26 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/15 22:48:40 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_list **stacka, int f)
{
	t_list	*temp;

	if (!stacka)
		return ;
	if (*stacka && (*stacka)->next)
	{
		temp = *stacka;
		while (temp->next->next)
		{
			temp = temp->next;
		}
		temp->next->next = *stacka;
		*stacka = temp->next;
		temp->next = NULL;
	}
	if (f == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stackb, int f)
{
	t_list	*temp;

	if (!stackb)
		return ;
	if (*stackb && (*stackb)->next)
	{
		temp = *stackb;
		while (temp->next->next)
		{
			temp = temp->next;
		}
		temp->next->next = *stackb;
		*stackb = temp->next;
		temp->next = NULL;
	}
	if (f == 1)
		write(1, "rrb\n", 4);
}

void	pa(t_list **stackb, t_list **stacka, int f)
{
	t_list	*temp;

	if (*stackb == NULL)
		return ;
	temp = *stackb;
	*stackb = (*stackb)->next;
	temp->next = *stacka;
	*stacka = temp;
	if (f == 1)
		write(1, "pa\n", 3);
}

void	pb(t_list **stackb, t_list **stacka, int f)
{
	t_list	*temp;

	if (*stacka == NULL)
		return ;
	temp = *stacka;
	*stacka = (*stacka)->next;
	temp->next = *stackb;
	*stackb = temp;
	if (f == 1)
		write(1, "pb\n", 3);
}
