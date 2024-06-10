/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:09:09 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/02 16:40:25 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies strings
// takes the full size of the buffer (not just the length) and guarantee to NUL-terminate the result
// note that a byte for the NUL should be included in size
// in brief: copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result
// returns the total length of the string they tried to create. That means the length of src

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
