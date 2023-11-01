/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:42:16 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/01 05:03:00 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isaplha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'z'))
		return (1);
	return (0);
}
/*int	main(void)
{
	char	al[] = "ABdc";
	printf("%d", ft_isaplha(*al));
}*/