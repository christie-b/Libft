/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:41:57 by cboutier          #+#    #+#             */
/*   Updated: 2021/05/25 10:03:06 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!del)
		return ;
	while (*lst)
	{
		current = *lst;
		(*del)(current->content);
		*lst = current->next;
		free(current);
	}
	*lst = NULL;
}
