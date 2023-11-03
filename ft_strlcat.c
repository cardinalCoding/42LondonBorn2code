/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:50:53 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 16:04:22 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t 	j;

	i = 0; 
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (j + ft_strlen(src));
}
/*int main() {
    // Test cases
    char dest[20] = "Hello, ";
    const char *src1 = "world!";
    size_t size1 = sizeof(dest);

    char dest2[10] = "abc";
    const char *src2 = "defg";
    size_t size2 = sizeof(dest2);

    char dest3[5] = "123";
    const char *src3 = "456";
    size_t size3 = sizeof(dest3);

    // Test the ft_strlcat function
    size_t result1 = ft_strlcat(dest, src1, size1);
    printf("Result 1: %zu, Concatenated String: %s\n", result1, dest);

    size_t result2 = ft_strlcat(dest2, src2, size2);
    printf("Result 2: %zu, Concatenated String: %s\n", result2, dest2);

    size_t result3 = ft_strlcat(dest3, src3, size3);
    printf("Result 3: %zu, Concatenated String: %s\n", result3, dest3);
    
    return 0;
}*/
