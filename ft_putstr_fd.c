/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:22:19 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 13:55:45 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*int	main(void)
{
    // Example of using ft_putstr_fd 
    to write a string to standard output (file descriptor 1)
    char *exampleString = "Hello, World!\n";
    ft_putstr_fd(exampleString, 1);  // 
    File descriptor 1 corresponds to standard output

    return 0;
}*/