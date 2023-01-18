/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrysorted_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:07:09 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/15 22:20:06 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	range(int *arr, int start, int end, int content)
{
	int	i;

	if (!arr)
		return (0);
	i = 0;
	while (i < end - start + 1)
	{
		if (content == arr[start + i])
			return (1);
		i++;
	}
	return (0);
}

void	continuous(int *arr, t_var *var, t_list **stacka, t_list **stackb)
{
	if (range(arr, var->start, var->end, (*stacka)->num) == 1)
	{
		pb(stackb, stacka, 1);
		if ((*stackb)->next && (*stackb)->num < arr[var->midindex])
			rb(stackb, 1);
		else if ((*stackb)->next && (*stackb)->num < (*stackb)->next->num)
			sb(stackb, 1);
	}
	else
		ra(stacka, 1);
	if (lst_size(stackb) == var->end - var->start + 1)
	{
		var->start = var->start - var->offset;
		var->end = var->end + var->offset;
		if (var->start <= 0)
			var->start = 0;
		if (var->end >= var->len)
			var->end = var->len;
	}
}

void	sort_100(int *arr, t_list **stacka, int size, t_list **stackb)
{
	t_var	var;

	if (!stacka || !arr || !stackb)
		return ;
	var.div = 10;
	var.midindex = (size / 2) - 1;
	var.offset = size / var.div;
	var.len = lst_size(stacka);
	var.start = var.midindex - var.offset;
	var.end = var.midindex + var.offset;
	while (*stacka)
	{
		continuous(arr, &var, stacka, stackb);
	}
	var.i = lst_size(stackb) - 1;
	var.down = 0;
	arraysorting_toa(stacka, stackb, arr, &var);
	free(arr);
}

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	temp;
	int	j;

	if (!arr)
		return ;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	arraysorted(t_list **stacka, t_list **stackb)
{
	int		j;
	int		i;
	int		*arr;
	t_list	*temp;

	arr = malloc(lst_size(stacka) * sizeof(int));
	i = lst_size(stacka);
	if (!stacka)
		return ;
	j = 0;
	temp = *stacka;
	while (temp)
	{
		arr[j] = temp->num;
		temp = temp->next;
		j++;
	}
	bubble_sort(arr, i);
	sort_100(arr, stacka, i, stackb);
}
