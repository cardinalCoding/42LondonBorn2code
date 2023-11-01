/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:53:01 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/01 13:58:46 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *altdest;
	char *alsrc;
	
	alsrc = (char *)dest;
	altdest = (char *)src;
	i = 0;
	while (i < n)
	{
		altdest[i] = alsrc[i];
		i++;
	}
	return (dest);
}
