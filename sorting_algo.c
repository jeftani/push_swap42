/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:35:32 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/17 14:48:48 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sorting_three(t_list **stacka)
{
	int	min;
	int	max;

	if (!stacka)
		return ;
	max = maximum(*stacka);
	min = minimum(*stacka);
	while ((*stacka)->num != min || (*stacka)->next->next->num != max)
	{
		if ((*stacka)->num == max && (*stacka)->next->num == min)
			ra(stacka, 1);
		else if ((*stacka)->next->next->num == min
			&& (*stacka)->next->num == max)
			rra(stacka, 1);
		else
			sa(stacka, 1);
	}
}

void	sorting_two(t_list **stacka)
{
	if ((*stacka)->num > (*stacka)->next->num)
		sa(stacka, 1);
}

void	returnfrom(t_list **stacka, t_list **stackb)
{
	sorting_three(stacka);
	pa(stackb, stacka, 1);
	pa(stackb, stacka, 1);
}

void	sorting_five(t_list **stackb, t_list **stacka)
{
	t_list	*temp;

	if (!stackb || !stacka)
		return 
	temp = *stacka;
	while (temp && lst_size(stacka) > 3)
	{
		if (minimum(*stacka) == (temp->num))
		{
			pb(stackb, stacka, 1);
			temp = *stacka;
		}
		else if (minimum(*stacka) == (temp->next->num))
		{
			sa(stacka, 1);
			pb(stackb, stacka, 1);
			temp = *stacka;
		}
		else
		{
			rra(stacka, 1);
			temp = *stacka;
		}
	}
	returnfrom(stacka, stackb);
}
