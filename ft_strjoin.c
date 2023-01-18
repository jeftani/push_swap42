/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:38:27 by ajeftani          #+#    #+#             */
/*   Updated: 2023/01/13 11:16:56 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	str1len;
	size_t	str2len;
	char	*ptr;

	if ((!s1) || (!s2))
		return (NULL);
	str1len = ft_strlen(s1);
	str2len = ft_strlen(s2);
	ptr = ((char *)malloc((str1len + str2len) + 1));
	if (!ptr)
		return (NULL);
	if (ptr)
	{
		ft_memcpy(ptr, s1, str1len + 1);
		ft_memcpy(ptr + str1len, s2, str2len + 1);
	}
	free(s1);
	return (ptr);
}
