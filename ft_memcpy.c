/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:53:01 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 05:25:54 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*altdest;
	unsigned char	*alsrc;

	alsrc = (unsigned char *)dest;
	altdest = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		altdest[i] = alsrc[i];
		i++;
	}
	return (dest);
}
