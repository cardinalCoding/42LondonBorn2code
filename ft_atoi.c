/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:49:58 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 10:21:38 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	neg;
	int	res;

	res = 0;
	neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * neg);
}
/*int main() {
    const char *test_cases[] = {
        "12345",       // Test case 1: A positive number
        "-6789",       // Test case 2: A negative number
        "0",           // Test case 3: Zero
        "  42",        // Test case 4: Leading whitespace
        "   -567",     // Test case 5: Leading whitespace and negative
        "   +99",      // Test case 6: Leading whitespace and positive
        "abc123",      // Test case 7: Non-numeric characters at the beginning
        "  12abc34",   // Test case 8: Mixed numeric and non-numeric characters
        "2147483647",  // Test case 9: Maximum positive integer
        "-2147483648", // Test case 10: Minimum negative integer
        "  99999999999999999", // Test case 11: Number exceeds int limits
        "-99999999999999999"  // Test case 12: Negative number exceeds int limits
    };

    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i++) {
        const char *test_str = test_cases[i];
        int result = ft_atoi(test_str);
        printf("Input: \"%s\", Result: %d\n", test_str, result);
    }

    return 0;
}*/