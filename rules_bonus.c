/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:48:20 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/15 23:44:20 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_list **stacka, int f)
{
	int	temp;

	if (*stacka && (*stacka)->next)
	{
		temp = (*stacka)->num;
		(*stacka)->num = (*stacka)->next->num;
		(*stacka)->next->num = temp;
	}
	if (f == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list **stackb, int f)
{
	int	temp;

	if (*stackb && (*stackb)->next)
	{
		temp = (*stackb)->num;
		(*stackb)->num = (*stackb)->next->num;
		(*stackb)->next->num = temp;
	}
	if (f == 1)
		write(1, "sb\n", 3);
}

void	ra(t_list **stacka, int f)
{
	t_list	*temp;

	if (*stacka && (*stacka)->next)
	{
		temp = *stacka;
		while (temp->next)
			temp = temp->next;
		temp->next = *stacka;
		*stacka = temp->next->next;
		temp->next->next = NULL;
	}
	if (f == 1)
		write(1, "ra\n", 3);
}

void	rb(t_list **stackb, int f)
{
	t_list	*temp;

	if (*stackb && (*stackb)->next)
	{
		temp = *stackb;
		while (temp->next)
			temp = temp->next;
		temp->next = *stackb;
		*stackb = temp->next->next;
		temp->next->next = NULL;
	}
	if (f == 1)
		write(1, "rb\n", 3);
}

void	ss(t_list **stackb, t_list **stacka, int f)
{
	if (!stackb || !stacka)
		return ;
	sa(stacka, 0);
	sb(stackb, 0);
	if (f == 1)
		write(1, "ss\n", 3);
}
