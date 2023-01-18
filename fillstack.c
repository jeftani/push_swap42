/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:44:39 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/13 16:26:22 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	lstaddback(t_list **stacka, t_list *new)
{
	t_list	*tmp;

	if (!new || !stacka)
		return ;
	if (*stacka == NULL)
	{
		*stacka = new;
	}
	else
	{
		tmp = *stacka;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}

t_list	*addnode(int content)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p->num = content;
	p->next = NULL;
	return (p);
}

void	fillstack(char **split, t_list **stacka)
{
	int		i;
	t_list	*ptr;

	if (!split || !stacka)
		return ;
	i = -1;
	while (split[++i])
	{
		ptr = addnode(ft_atoi(split[i]));
		lstaddback(stacka, ptr);
		ptr = NULL;
	}
	return ;
}
