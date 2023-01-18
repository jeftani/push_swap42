/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_to_stackA.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:01:15 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/15 22:20:24 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	check_max_isthere_in_parts(t_list **stackb, int value, int size)
{
	int		first_part;
	int		i;
	t_list	*temp;

	if (!stackb || !*stackb)
		return (0);
	first_part = size / 2;
	i = 0;
	temp = *stackb;
	while (*stackb && i < first_part)
	{
		if (temp->num != value)
		{
			temp = temp->next;
			i++;
		}
		else if (temp->num == value)
			return (1);
	}
	return (0);
}

int	check_max_isthere_in_b(t_list **stackb, int maxvalue)
{
	t_list	*temp;

	if (!stackb || !*stackb)
		return (0);
	temp = *stackb;
	while (temp->next != NULL && maxvalue != temp->num)
		temp = temp->next;
	if (maxvalue == temp->num)
		return (1);
	else
		return (0);
}

int	tail(t_list *stacka)
{
	if (!stacka)
		return (0);
	while (stacka->next)
		stacka = stacka->next;
	return (stacka->num);
}

void	the_if(t_list **stackb, int *arr, int i)
{
	if (check_max_isthere_in_parts(stackb, arr[i], i) == 1)
		rb(stackb, 1);
	else if (check_max_isthere_in_parts(stackb, arr[i], i) == 0)
		rrb(stackb, 1);
}

void	arraysorting_toa(t_list **stacka, t_list **stackb, int *arr, t_var *var)
{
	while (*stackb || var->i >= 0)
	{
		if (check_max_isthere_in_b(stackb, arr[var->i]) == 1)
		{
			if ((*stackb)->num == arr[var->i])
			{
				pa(stackb, stacka, 1);
				var->i--;
			}
			else if (var->down == 0 || (*stackb)->num > tail(*stacka))
			{
				pa(stackb, stacka, 1);
				ra(stacka, 1);
				var->down++;
			}
			else
				the_if(stackb, arr, var->i);
		}
		else
		{
			rra(stacka, 1);
			var->i--;
			var->down--;
		}
	}
}
