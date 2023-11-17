/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:53:01 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/09 13:26:24 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*altdest;
	unsigned char	*alsrc;

	alsrc = (unsigned char *)src;
	altdest = (unsigned char *)dest;
	i = 0;
	if (!altdest && !alsrc)
		return (NULL);
	while (i < n)
	{
		altdest[i] = alsrc[i];
		i++;
	}
	return (dest);
}
/*int	main()
{
	char src[] = "Hello, World!";
    char dest[20];

    size_t n = strlen(src) + 1;  // Including null terminator

    // Test your ft_memcpy function
    ft_memcpy(dest, src, n);

    // Check if ft_memcpy copied the content correctly
    if (strcmp(dest, src) == 0)
    {
        printf("Test Passed: ft_memcpy successfully copied the string.\n");
    }
    else
    {
        printf("Test Failed: ft_memcpy did not copy the string correctly.\n");
    }

    return 0;
}*/