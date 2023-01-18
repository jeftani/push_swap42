/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:17:29 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/17 14:08:43 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	**fillarg(int ac, char **av, char **split)
{
	char	*str;
	int		i;

	if (!av)
		return (NULL);
	(void)ac;
	i = 1;
	str = malloc(1);
	while (av[i])
	{
		if (ft_strspn(av[i], " ") == ft_strlen(av[i]) || ft_strlen(av[i]) == 0)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i]);
		i++;
	}
	split = ft_split(str, ' ');
	free(str);
	return (split);
}

void	pushswap(int argc, char **argv, t_list **stacka, t_list **stackb)
{
	char	**split;

	if (!stackb || !stacka || !argv)
		return ;
	split = NULL;
	split = fillarg(argc, argv, split);
	check_overflow(split);
	check_dup(split);
	check_validiter(split);
	fillstack(split, stacka);
	ft_free(split);
	if (check_sort(stacka, lst_size(stacka)) == 1)
		exit(0);
	if (lst_size(stacka) == 3)
		sorting_three(stacka);
	else if (lst_size(stacka) == 2)
		sorting_two(stacka);
	else if (lst_size(stacka) <= 5)
		sorting_five(stackb, stacka);
	else if (lst_size(stacka) >= 6 && lst_size(stacka) < 10)
		sorting_more(stackb, stacka);
	else if (lst_size(stacka) >= 10)
		arraysorted(stacka, stackb);
}
