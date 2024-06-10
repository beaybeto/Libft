/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:52:05 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:18:46 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether c is a 7-bit unsigned char value that fits into the ASCII character set

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
