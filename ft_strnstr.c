/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:41:33 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:45:15 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched
// if needle is an empty string, haystack is returned
// if needle occurs nowhere in haystack, NULL is returned
// otherwise a pointer to the first character of the first occurrence of little is returned

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*substr;

	str = (char *) haystack;
	substr = (char *) needle;
	i = 0;
	if (!*substr)
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (substr[j] != '\0' && (str[i + j] == substr[j])
			&& ((i + j) < len))
		{
			j++;
		}
		if (substr[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
