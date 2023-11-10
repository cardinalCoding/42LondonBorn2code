/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:57:07 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/09 13:23:21 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, char c)
{
	int	count;

	count = 0;
	if (c == '\0')
		return (0);
	while (*s)
	{
		if (*s == c)
			while (*s == c)
				s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		word_count;
	int		i;
	int		len;

	i = 0;
	word_count = count(s, c);
	words = (char **)malloc(sizeof(char *) * (word_count +1));
	if (!words)
		return (NULL);
	while (i < word_count)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		words[i] = (char *)malloc(sizeof(char) * (len + 1));
		ft_strlcpy(words[i], s, len + 1);
		s += len;
		i++;
	}
	words[i] = NULL;
	return (words);
}
/*int	main(void)
{
    char **words;
    words = ft_split("Hello,World,How,Are,You", ',');

    int i = 0;
    while (words[i])
    {
        printf("%s\n", words[i]);
        free(words[i]);
        i++;
    }

    free(words);

    return 0;
}*/