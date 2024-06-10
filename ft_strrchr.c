/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:49:05 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/02 18:26:15 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locate character in string
// returns a pointer to the last occurrence of the character c in the string s

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*array;
	int		i;

	a = (int)c;
	array = (char *) s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (a == '\0')
		{
			return (&array[i]);
		}
		if (array[i] == a)
		{
			return (&array[i]);
		}
		i--;
	}
	return (NULL);
}
