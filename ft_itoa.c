/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:19:36 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/09 14:55:01 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_size(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (1 + num_size(-n));
	else
		return (1 + num_size(n / 10));
}

char	*ft_itoa(int n)
{
	size_t	length;
	char	*str;

	length = num_size(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	str[length] = '\0';
	while (n != 0)
	{
		length--;
		str[length - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*int main() 
{
    // Test Case 1: Positive number
    int num1 = 123456;
    char *result1 = ft_itoa(num1);
    printf("Result 1: %s\n", result1);
    free(result1);

    // Test Case 2: Negative number
    int num2 = -9876;
    char *result2 = ft_itoa(num2);
    printf("Result 2: %s\n", result2);
    free(result2);

    // Test Case 3: Zero
    int num3 = 0;
    char *result3 = ft_itoa(num3);
    printf("Result 3: %s\n", result3);
    free(result3);

    return 0;
}*/