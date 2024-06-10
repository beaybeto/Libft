/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:43:18 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/05/03 12:42:58 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// adds a node at the beginning of a linked list
// lst --> pointer that points to the first node in the original list
// new --> pointer to the element that will be added

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
