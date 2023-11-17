/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:21:08 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/04 15:38:59 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*int main() {
    // Test 1: Basic test case
    const char *input1 = "Hello, World!";
    char *result1 = ft_substr(input1, 7, 5);
    printf("Test 1: Substring of '%s' starting at 
    index 7 with length 5: '%s'\n", input1, result1);
    free(result1);

    // Test 2: Substring length greater than remaining characters
    const char *input2 = "Testing";
    char *result2 = ft_substr(input2, 2, 10);
    printf("Test 2: Substring of '%s' starting at 
    index 2 with length 10: '%s'\n", input2, result2);
    free(result2);

    // Test 3: Substring from the beginning
    const char *input3 = "12345";
    char *result3 = ft_substr(input3, 0, 3);
    printf("Test 3: Substring of '%s' starting at index 
    0 with length 3: '%s'\n", input3, result3);
    free(result3);

    // Test 4: Empty string
    const char *input4 = "";
    char *result4 = ft_substr(input4, 0, 5);
    printf("Test 4: Substring of an empty string starting 
    at index 0 with length 5: '%s'\n", result4);
    free(result4);

    // Test 5: NULL input string
    char *result5 = ft_substr(NULL, 2, 4);
    if (result5 == NULL) {
        printf("Test 5: NULL input string handled correctly.\n");
    } else {
        printf("Test 5: Failed to handle NULL input string.\n");
    }

    return 0;
}*/