/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 05:39:17 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 10:56:54 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
/*int main() {
    char testChars[] = {'0', '9', 'a', 'A', '$', '5', '\0'};
    int i = 0;

    char ch = testChars[i];
    int result_ft = ft_isdigit(ch);

    printf("Character '%c':\n", ch);
    printf("ft_isdigit result: %s\n", result_ft ? "true" : "false");

    if (result_ft) {
        printf("It is a digit.\n");
    } else {
        printf("It is not a digit.\n");
    }

    return 0;
}*/