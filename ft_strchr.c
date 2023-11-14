/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 05:45:58 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/03 11:48:41 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*int main() {
    const char *str = "Hello, World!";
    int character_to_find = 'W';
    
    char *result = ft_strchr(str, character_to_find);

    if (result) {
        printf("Character '%c' found at position: 
        %ld\n", character_to_find, result - str);
    } else {
        printf("Character '%c' not found in 
        the string.\n", character_to_find);
    }
    return 0;
}*/