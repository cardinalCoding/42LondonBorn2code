/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:01:51 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/10/19 16:39:25 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*int     main()
{
        printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
        printf("\n%d", ft_strncmp("ABC", "AB C", 4));
        printf("\n%d", ft_strncmp("ABC", "ABC", 4));
        printf("\n%d", ft_strncmp("ABC", "ABZ", 4));
}*/
