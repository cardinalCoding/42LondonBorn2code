/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:21:49 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 14:26:18 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main(void)
{
    // Test case 1: Output a 
    //character to stdout (file descriptor 1)
    printf("Test Case 1:\n");
    char testChar1 = 'A';
    ft_putchar_fd(testChar1, 1);
    printf("\n");

    // Test case 2: Output a digit to a file (file descriptor 2)
    printf("Test Case 2:\n");
    char testChar2 = '5';
    ft_putchar_fd(testChar2, 2);
    printf("\n");

    // Test case 3: Output a newline 
    //character to a file (file descriptor 3)
    printf("Test Case 3:\n");
    char testChar3 = '\n';
    ft_putchar_fd(testChar3, 3);
    printf("\n");

    // Test case 4: Output a non-alphanumeric 
    //character to a file (file descriptor 1)
    printf("Test Case 4:\n");
    char testChar4 = '@';
    ft_putchar_fd(testChar4, 1);
    printf("\n");

    // Test case 5: Output a null 
    //character to a file (file descriptor 2)
    printf("Test Case 5:\n");
    char testChar5 = '\0';
    ft_putchar_fd(testChar5, 2);
    printf("\n");

    return 0;
}*/