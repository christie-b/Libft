/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:12:42 by cboutier          #+#    #+#             */
/*   Updated: 2021/05/24 17:22:23 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*elem;

	i = 0;
	if (!lst)
		return (i);
	elem = lst;
	while (elem != NULL)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}
