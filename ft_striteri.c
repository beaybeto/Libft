/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:39:13 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:44:34 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// to each character of the string 's', it applies the function 'f'
// giving 'f' as parameters the index of each character within 's' and the address of the character itself, 
// which can be character itself, which may be modified if necessary

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
