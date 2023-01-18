/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:38:31 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/16 01:34:36 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct node
{
	int			num;
	struct node	*next;
}				t_list;
typedef struct sac
{
	int			i;
	int			down;
	int			div;
	int			midindex;
	int			offset;
	int			len;
	int			start;
	int			end;
}				t_var;
void			pushswap(int argc, char **argv, t_list **stacka,
					t_list **stackb);
int				maximum(t_list *stacka);
void			arraysorting_toa(t_list **stacka, t_list **stackb, int *arr,
					t_var *var);
int				indexof(int *arr, int number, int size);
void			sort_100(int *arr, t_list **stacka, int size, t_list **stackb);
void			arraysorted(t_list **stacka, t_list **stackb);
int				smallnum(t_list **stacka);
int				Maxnum(t_list **stacka);
int				minimum(t_list *stacka);
void			sorting_five(t_list **stackb, t_list **stacka);
void			sorting_more(t_list **stackb, t_list **stacka);
void			ft_putnbr(int nb);
void			*ft_memcpy(void *dst, const void *src, size_t n);
char			*ft_strjoin(char *s1, char *s2);
char			**ft_split(char const *s, char c);
char			*ft_strdup(const char *s1);
int				ft_strcmp(char *s1, char *s2);
int				ft_isdigit(char *s);
int				ft_isalpha(int c);
int				ft_atoi(const char *str);
char			*ft_substr(char const *string, unsigned int start, size_t len);
size_t			ft_strlen(const char *s);
void			check_validiter(char **argv);
void			check_dup(char **av);
int				main(int argc, char **argv);
char			*ft_itoa(int n);
long long		ft_atoill(char *s);
void			check_overflow(char **av);
void			fillstack(char **split, t_list **stacka);
int				check_sort(t_list **stacka, int size);
int				lst_size(t_list **stacka);
void			sorting_three(t_list **stacka);
void			sorting_two(t_list **stacka);
void			creating_stackb(t_list **stackb, int content);
void			sa(t_list **stacka, int f);
void			*ft_free(char **ptr);
void			sb(t_list **stackb, int f);
void			ra(t_list **stacka, int f);
void			rb(t_list **stackb, int f);
void			rra(t_list **stacka, int f);
void			rrb(t_list **stackb, int f);
void			pa(t_list **stackb, t_list **stacka, int f);
void			pb(t_list **stackb, t_list **stacka, int f);
void			ss(t_list **stackb, t_list **stacka, int f);
void			rr(t_list **stackb, t_list **stacka, int f);
void			rrr(t_list **stackb, t_list **stacka, int f);
void			print_list(t_list *stack);
char			**fillarg(int ac, char **av, char **split);
int				main(int argc, char **argv);
void			free_stack(t_list **a);
size_t			ft_strspn(const char *s, const char *accept);
#endif
