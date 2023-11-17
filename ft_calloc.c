/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:25:25 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/04 11:41:51 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*void test_calloc() {
    // Test Case 1: Allocation of 5 integers (20 bytes) and initialize to 0
    int *arr1 = (int *)calloc(5, sizeof(int));
    if (arr1 != NULL) {
        for (int i = 0; i < 5; i++) {
            if (arr1[i] != 0) {
                printf("Test Case 1: FAILED\n");
                free(arr1);
                return;
            }
        }
        printf("Test Case 1: PASSED\n");
        free(arr1);
    } else {
        printf("Test Case 1: FAILED\n");
    }

    // Test Case 2: Allocation failure, should return NULL
    void *arr2 = calloc(0, 100);
    if (arr2 == NULL) {
        printf("Test Case 2: PASSED\n");
    } else {
        printf("Test Case 2: FAILED\n");
    }

    // Test Case 3: Allocation failure, should return NULL
    void *arr3 = ft_calloc(400000000000000, 
    40000000000000000); // Extremely large allocation
    if (arr3 == NULL) {
        printf("Test Case 3: PASSED\n");
    } else {
        printf("Test Case 3: FAILED\n");
    }
}


int main() {
    test_calloc();
    return 0;
}*/