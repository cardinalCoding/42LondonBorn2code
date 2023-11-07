/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:57:07 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/07 10:09:56 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j -1] && ft_strchr(set, s1[j -1]))
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
/*int main() {
    // Test case 1: Checks For Null Values and resturn null 
    const char *s1 = "   hello world   ";
    const char *set = 0;
    char *result = ft_strtrim(s1, set);
    if (result == "hello world")
	printf("Test Case 1: \"%s\" -> \"%s\"\n", s1, result);
    else
	printf ("NULL\n");
    free(result);

    // Test case 2: Remove leading and trailing spaces and charecters
    s1 = "   hello world    ";
    set = " ";
    result = ft_strtrim(s1, set);
    if (strcmp(result, "hello world") == 0)
    {
	printf("Test Case 2: \033[32mPASSED\033[0m\n");
	printf("Test Case 2: \"%s\" -> \"%s\"\n", s1, result);
    }
    else 
	printf("Test Case 2: \"%s\" -> \"%s\"\n", s1, result);
    free(result);

    return (0);
}*/