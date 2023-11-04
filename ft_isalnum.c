/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 05:55:10 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/04 08:17:36 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}
/*int main()
{
    int c1 = 'A';
    int c2 = '5';
    int c3 = 'z';
    int c4 = '*';
    int c5 = ' ';
    int c6 = 127;
    int c7 = '\n';

    printf("Testing ft_isalnum function:\n");

    printf("Character '%c' (%d) is %s\n", c1, 
    c1, ft_isalnum(c1) ? "alphanumeric" : "not alphanumeric");
    printf("Character '%c' (%d) is %s\n", c2, 
    c2, ft_isalnum(c2) ? "alphanumeric" : "not alphanumeric");
    printf("Character '%c' (%d) is %s\n", c3, 
    c3, ft_isalnum(c3) ? "alphanumeric" : "not alphanumeric");
    printf("Character '%c' (%d) is %s\n", c4, 
    c4, ft_isalnum(c4) ? "alphanumeric" : "not alphanumeric");
    printf("Character '%c' (%d) is %s\n", c5, 
    c5, ft_isalnum(c5) ? "alphanumeric" : "not alphanumeric");
    printf("Character '%c' (%d) is %s\n", c6, 
    c6, ft_isalnum(c6) ? "alphanumeric" : "not alphanumeric");
    printf("Character '%c' (%d) is %s\n", c7, 
    c7, ft_isalnum(c7) ? "alphanumeric" : "not alphanumeric");

    return 0;
}*/