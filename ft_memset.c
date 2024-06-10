/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:52:23 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/02 15:42:25 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fills the first len bytes of the memory area pointed to by b with the constant byte c
// returns a pointer to the memory area b

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	a;
	char			*ptr;

	ptr = (char *)b;
	a = (char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = a;
		i++;
	}
	return (ptr);
}
