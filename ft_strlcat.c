/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:14:59 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/02 18:21:41 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// concatenates strings
// takes the full size of the buffer (not just the length) and guarantee to NUL-terminate the result
// note that a byte for the NUL should be included in size
// appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result
// returns the total length of the string they tried to create. That means the initial length of dst plus the length of src

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = ft_strlen(dst);
	if (dstsize == 0 || dest_len >= dstsize)
		return (src_len + dstsize);
	else
	{
		while (src[i] != '\0' && i < (dstsize - dest_len - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
	}
	dst[j] = '\0';
	return (dest_len + src_len);
}
