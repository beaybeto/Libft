/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:26:03 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/09 15:49:23 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// reserves an array of strings (pointer to pointer) resulting from separating the string 's' into substrings using the character 'c' as delimiter
// the array ends with a NULL pointer
// ft_count_words is used to know the number of final words that will be present when using the delimiter c
// free_split releases the array pointer if a failure occurs
// by doing s - len (pointer minus int) you are moving the pointer s back in the string by an amount of characters equal to len
// by using !new_string[i - 1] we are evaluating if the element at position i - 1 of new_string is a null pointer, and thus checking if an error occurred

#include "libft.h"

static size_t	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**new_string;
	size_t	i;
	size_t	len;

	i = 0;
	new_string = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!new_string | !s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			new_string[i++] = ft_substr(s - len, 0, len);
			if (!new_string[i - 1])
				return (free_split(new_string), NULL);
		}
		else
			++s;
	}
	new_string[i] = 0;
	return (new_string);
}
