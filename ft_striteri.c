/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:20:49 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 13:30:30 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*void test_ft_striteri(char *input, 
void (*func)(unsigned int, char*), char *expected) {
    char result[strlen(input) + 1];
    strcpy(result, input);

    ft_striteri(result, func);

    if (strcmp(result, expected) == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }
}

// Example usage of ft_striteri
void example_function(unsigned int index, char *c) {
    // Example: Convert characters to uppercase
    if (*c >= 'a' && *c <= 'z') {
        *c = (char)toupper(*c);
    }
}

int main() {
    // Test cases
    printf("Test Case 1: ");
    test_ft_striteri("hello", example_function, "HELLO");

    // Add more test cases as needed

    return 0;
}*/