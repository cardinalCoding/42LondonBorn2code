/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 05:27:37 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 10:41:18 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}
/*int main() {
    // Test case 1: Lowercase letters (a to z)
    int result1 = ft_isascii('a') && ft_isascii('z');

    // Test case 2: Uppercase letters (A to Z)
    int result2 = ft_isascii('A') && ft_isascii('Z');

    // Test case 3: Digits (0 to 9)
    int result3 = ft_isascii('0') && ft_isascii('9');

    // Test case 4: Special characters
    int result4 = ft_isascii('!') && ft_isascii('@') && ft_isascii('$');

    // Test case 5: Non-ASCII characters
    int result5 = ft_isascii(128) && ft_isascii(255);

    if (result1 && result2 && result3 && result4 && result5) {
        printf("All test cases passed.\n");
    } else {
        printf("Some test cases failed.\n");
    }

    return 0;
}*/