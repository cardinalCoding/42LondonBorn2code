/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:22:45 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 13:59:32 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*int main(void) {
    // Open a file for writing 
    (you can replace "output.txt" with your desired file name)
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Test the ft_putendl_fd function
    char *message = "Hello, World!";
    ft_putendl_fd(message, fd);

    // Close the file descriptor
    close(fd);

    return 0;
}*/