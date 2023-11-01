/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:55:46 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/01 11:00:19 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int *c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len -1] = c;
		len--;
	}
	return (b);
}