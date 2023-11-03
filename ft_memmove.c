/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:40:29 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 06:26:40 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int		i;
	char	*desttemp;
	char	*srctemp;

	if (dest > src)
	{
		i =(int)len -1;
		desttemp = (char *)dest;
		srctemp = (char *)src;
		while (i >= 0)
		{
			desttemp[i] = srctemp[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
int main() {
    char src[] = "Hello, World!";
    char dest[15];

    // Using the standard library's memmove function for comparison
    char std_dest[15];

    printf("Source string: %s\n", src);

    // Copy the source string to the destination using the ft_memmove function
    ft_memmove(dest, src, ft_strlen(src) + 1);
    printf("ft_memmove: %s\n", dest);

    // Reset the destination string
    ft_memset(dest, 0, sizeof(dest));

    // Copy the source string to the destination using the standard library's memmove function
    ft_memmove(std_dest, src, ft_strlen(src) + 1);
    printf("memmove   : %s\n", std_dest);

    // Compare the results
    //if (strcmp(dest, std_dest) == 0) {
        //printf("Result matches the standard library memmove.\n");
    //} else {
        //printf("Result does not match the standard library memmove.\n");
    //}

    return 0;
}

