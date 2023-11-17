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

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	if (c == '\0')
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count ++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static	void	ft_extraction(char **str, char const *s, char c)
{
	char		**sub_p;
	char const	*tmp;

	tmp = s;
	sub_p = str;
	while (*tmp)
	{
		while (*s == c)
			s++;
		tmp = s;
		while (*tmp && *tmp != c)
			tmp++;
		if (*tmp == c || tmp > s)
		{
			*sub_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			sub_p++;
		}
	}
	*sub_p = (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (!words)
		return (NULL);
	ft_extraction(words, s, c);
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