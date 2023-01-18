/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:44:23 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/15 23:44:51 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rr(t_list **stackb, t_list **stacka, int f)
{
	if (!stackb || !stacka)
		return ;
	ra(stacka, 0);
	rb(stackb, 0);
	if (f == 1)
		write(1, "rr\n", 3);
}

void	rrr(t_list **stackb, t_list **stacka, int f)
{
	if (!stackb || !stacka)
		return ;
	rra(stacka, 0);
	rrb(stackb, 0);
	if (f == 1)
		write(1, "rrr\n", 4);
}
