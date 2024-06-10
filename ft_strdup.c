/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:38:44 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:44:25 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to a new string which is a duplicate of the string s1
// it returns NULL if insufficient memory was available

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = (char *)malloc(ft_strlen(s1) + 1);
	if (memory == NULL)
		return (NULL);
	else
	{
		while (s1[i] != '\0')
		{
			memory[i] = s1[i];
			i++;
		}
		memory[i] = '\0';
	}
	return (memory);
}
