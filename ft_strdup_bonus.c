/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:30:06 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/13 11:16:51 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	index;
	char	*copy;

	index = 0;
	i = ft_strlen(s1);
	copy = (char *)malloc(i + 1 * sizeof(char));
	if (!copy)
		return (NULL);
	while (s1[index])
	{
		copy[index] = s1[index];
		index++;
	}
	copy[i] = '\0';
	return (copy);
}
