/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:12:04 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/02 15:44:11 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//zero a byte string

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*array;

	i = 0;
	array = (char *)s;
	while (i < n)
	{
		array[i] = '\0';
		i++;
	}
}
