/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:01:51 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/09 07:35:21 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*int main()
{
    // Testing the custom ft_strncmp function
    const char *str1 = "ABC";
    const char *str2 = "AB";
    
    int n = 8; // Number of characters to compare

    int result = ft_strncmp(str1, str2, n);
    
    if (result < 0)
    {
        printf("'%.*s' is less than '%.*s'\n", n, str1, n, str2);
    }
    else if (result > 0)
    {
        printf("'%.*s' is greater than '%.*s'\n", n, str1, n, str2);
    }
    else
    {
        printf("'%.*s' is equal to '%.*s'\n", n, str1, n, str2);
    }
    return 0;
    printf("%d the actual result : \n", strncmp(str1, str2, n));
}*/