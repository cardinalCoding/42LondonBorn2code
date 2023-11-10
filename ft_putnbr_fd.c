/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:23:19 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 14:27:14 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*void test(int n, const char *expected_output) {
    char buffer[50];  
    // Adjust the buffer size accordingly

    // Redirect stdout to a buffer
    freopen("output.txt", "w", stdout);

    // Call the function with the given input
    ft_putnbr_fd(n, 1);  // Assuming fd 1 corresponds to stdout

    // Capture the output
    fflush(stdout);
    freopen("/dev/tty", "w", stdout);  // Reset stdout

    // Compare the output with the expected output
    snprintf(buffer, sizeof(buffer), "%d", n);
    printf("Test %s for %d\n", strcmp(expected_output, buffer) == 0 ? 
    "passed" : "failed", n);
}

int main() {
    // Test cases
    test(123, "123");
    test(-456, "-456");
    test(0, "0");
    test(-2147483648, "-2147483648");

    return 0;
}*/