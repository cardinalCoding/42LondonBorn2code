/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 06:23:15 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/04 13:57:10 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;

	if (*little == '\0')
		return ((char *)big);
	l = ft_strlen(little);
	if (len == 0)
		return (NULL);
	while (*big && l <= len)
	{
		if (*big == *little && ft_strncmp(big, little, l) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
