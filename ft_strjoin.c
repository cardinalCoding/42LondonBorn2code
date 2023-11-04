/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:58:10 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/04 15:39:22 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"

int main() {
    // Test case 1
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    if (result != NULL) {
        printf(GREEN "Result 1: %s\n" RESET, result);
        free(result);
    } else {
        printf(RED "Test case 1 failed: Memory allocation error\n" RESET);
    }

    // Test case 2
    char *s3 = "This is a ";
    char *s4 = "test.";
    result = ft_strjoin(s3, s4);
    if (result != NULL) {
        printf(GREEN "Result 2: %s\n" RESET, result);
        free(result);
    } else {
        printf(RED "Test case 2 failed: Memory allocation error\n" RESET);
    }

    // Test case 3 (Empty strings)
    char *s5 = "";
    char *s6 = "";
    result = ft_strjoin(s5, s6);
    if (result != NULL) {
        printf(GREEN "Result 3: %s\n" RESET, result);
        free(result);
    } else {
        printf(RED "Test case 3 failed: Memory allocation error\n" RESET);
    }

    return 0;
}*/