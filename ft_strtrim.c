/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:01:45 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:45:27 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// eliminates the characters given by the string set, in the main string s1
// from the beginning and from the end, until it finds a character not belonging to set

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	while (j > i && ft_strrchr(set, s1[j - 1]) != NULL)
	{
		j--;
	}
	result = ft_substr(s1, i, j - i);
	return (result);
}
