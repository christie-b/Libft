/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:02:00 by cboutier          #+#    #+#             */
/*   Updated: 2021/05/21 09:20:53 by cboutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*destcpy;

	destcpy = (unsigned char *)dest;
	i = 0;
	while (i < len)
	{
		destcpy[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
