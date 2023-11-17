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

static int	num_size(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	length = num_size(n);
	str = ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == INT_MIN)
			return (ft_strdup("-2147483648"));
		n = -n;
	}
	while (length-- && n != 0)
	{
		str[length] = (n % 10) + '0';
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