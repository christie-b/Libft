/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:47:59 by cboutier          #+#    #+#             */
/*   Updated: 2021/05/25 14:19:38 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*dst;
	size_t	i;

	total = count * size;
	dst = malloc(total);
	if (dst == 0)
		return (NULL);
	i = 0;
	while (i < total)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
