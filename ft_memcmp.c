/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:43:08 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:46:27 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2
// returns an integer less than, equal to, or greater than zero if s1 is less than, equal to , or greater than s2
// The difference with strncmp is that memcmp does not end when it reaches a '\0'

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;
	size_t			i;

	s_1 = (unsigned char *) s1;
	s_2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s_1[i] != s_2[i])
		{
			return (s_1[i] - s_2[i]);
		}
		i++;
	}
	return (0);
}
