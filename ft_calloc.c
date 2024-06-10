/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:27:41 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:42:39 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocates dynamic memory
// allocates memory for an array of count elements of size bytes each and returns a pointer to the allocated memory
// the memory is set to zero

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = (char *)malloc(count * size);
	if (memory == NULL)
	{
		return (NULL);
	}
	ft_bzero(memory, size * count);
	return (memory);
}
