/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:57:07 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/15 19:20:46 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim_full_set(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

static size_t	getstart(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

static size_t	getend(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trim_leng;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = getstart(s1, set);
	if (s1[start] == '\0')
		return (trim_full_set());
	end = getend(s1, set);
	if (end >= start)
		trim_leng = end - start + 1;
	else
		trim_leng = 0;
	str = malloc(trim_leng + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, trim_leng);
	str[trim_leng] = '\0';
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