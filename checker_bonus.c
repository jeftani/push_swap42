/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:30:00 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/16 02:31:36 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include "pushswap.h"

void	execute_command(char *str, t_list **a, t_list **b)
{
	if (ft_strcmp(str, "sa\n") == 0)
		sa(a, 0);
	else if (ft_strcmp(str, "sb\n") == 0)
		sb(b, 0);
	else if (ft_strcmp(str, "ss\n") == 0)
		ss(a, b, 0);
	else if (ft_strcmp(str, "ra\n") == 0)
		ra(a, 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		rb(b, 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(a, b, 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		rra(a, 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		rrb(b, 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(a, b, 0);
	else if (ft_strcmp(str, "pa\n") == 0)
		pa(b, a, 0);
	else if (ft_strcmp(str, "pb\n") == 0)
		pb(b, a, 0);
	else
		(write(2, "Error\n", 6), exit(0));
}

void	free_stack(t_list **a)
{
	t_list	*tmp;

	while (*a)
	{
		tmp = (*a)->next;
		free(*a);
		*a = tmp;
	}
}

void	checker(int ac, char **av, t_list **a, t_list **b)
{
	char	**split;
	char	*line;
	int		stack_size;

	split = NULL;
	split = fillarg(ac, av, split);
	check_validiter(split);
	fillstack(split, a);
	check_dup(split);
	check_overflow(split);
	stack_size = lst_size(a);
	line = get_next_line(0);
	while (line)
	{
		execute_command(line, a, b);
		free(line);
		line = get_next_line(0);
	}
	if (!*b && check_sort(a, stack_size) == 1)
		write(2, "OK\n", 3);
	else
		write(2, "KO\n", 3);
	free_stack(a);
	free_stack(b);
	return ;
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	checker(ac, av, &a, &b);
}
