/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:56:53 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/04 09:24:25 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main() {
    // Test Case 1: Testing with a string
    const char *original_str = "Hello, World!";
    char *duplicated_str = ft_strdup(original_str);
    
    if (duplicated_str) {
        printf("Original String: %s\n", original_str);
        printf("Duplicated String: %s\n", duplicated_str);
        
        // Check if the duplicated string is identical to the original
        if (strcmp(original_str, duplicated_str) == 0) {
            printf("Test Case 1 \033[32mPASSED\033[0m\n");
        } else {
            printf("Test Case 1 \033[31mFAILED\033[0m\n");
        }
        
        // Clean up
        free(duplicated_str);
    } else {
        printf("Memory allocation failed for Test Case 1\n");
    }

    // Test Case 2: Testing with an empty string
    const char *empty_str = " ";
    char *duplicated_empty_str = (empty_str);
    
    if (duplicated_empty_str) {
        printf("Original Empty String: \"%s\"\n", empty_str);
        printf("Duplicated Empty String: \"%s\"\n", duplicated_empty_str);
        
        if (strcmp(empty_str, duplicated_empty_str) == 0) {
            printf("Test Case 2 \033[32mPASSED\033[0m\n");
        } else {
            printf("Test Case 2 \033[31mFAILED\033[0m\n");
        }
        
        free(duplicated_empty_str);
    } else {
        printf("Memory allocation failed for Test Case 2\n");
    }

    return 0;
}*/