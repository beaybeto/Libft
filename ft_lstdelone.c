/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:11:19 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/04/30 15:29:12 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// free the memory of the content using the function 'del' given as a parameter, in addition to freeing the node
// the memory of next must not be freed

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
