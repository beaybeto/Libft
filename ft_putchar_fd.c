/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:46:16 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:43:47 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sends the character 'c' to the specified file descriptor (fd)

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
