/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 05:35:54 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 15:18:24 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const int *s1, const int *s2, size_t n)
{
	size_t				i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*void run_tests() {
    int test1[] = {1, 2, 3, 4, 5};
    int test2[] = {1, 2, 3, 4, 6};
    int test3[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(test1) / sizeof(test1[0]);

    int result1 = ft_memcmp(test1, test2, size);
    int result2 = ft_memcmp(test1, test3, size);

    if (result1 < 0) {
        printf("Test 1: Passed\n");
    } else {
        printf("Test 1: Failed\n");
    }

    if (result2 == 0) {
        printf("Test 2: Passed\n");
    } else {
        printf("Test 2: Failed\n");
    }
}

int main() {
    run_tests();
    return 0;
}*/