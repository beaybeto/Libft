/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:16:40 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/04/12 17:06:49 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for any printable character including space

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (c);
	}
	return (0);
}
