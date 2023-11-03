/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:42:16 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 10:33:28 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isaplha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'z'))
		return (1);
	return (0);
}
/*int main() {
    int c1 = 'A';
    int c2 = '5';
    int c3 = 'z';
    int c4 = '*';
    int c5 = ' ';
    int c6 = 127;
    int c7 = '\n';

    printf("Testing ft_isaplha function:\n");

    printf("Character '%c' (%d) is %s\n", c1, c1, ft_isaplha(c1) ? "isaplha" : "not isaplha");
    printf("Character '%c' (%d) is %s\n", c2, c2, ft_isaplha(c2) ? "isaplha" : "not isaplha");
    printf("Character '%c' (%d) is %s\n", c3, c3, ft_isaplha(c3) ? "isaplha" : "not isaplha");
    printf("Character '%c' (%d) is %s\n", c4, c4, ft_isaplha(c4) ? "isaplha" : "not isaplha");
    printf("Character '%c' (%d) is %s\n", c5, c5, ft_isaplha(c5) ? "isaplha" : "not isaplha");
    printf("Character '%c' (%d) is %s\n", c6, c6, ft_isaplha(c6) ? "isaplha" : "not isaplha");
    printf("Character '%c' (%d) is %s\n", c7, c7, ft_isaplha(c7) ? "isaplha" : "not isaplha");

    return 0;
}*/