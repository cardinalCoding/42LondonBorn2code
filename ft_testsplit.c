/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:53:55 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/09 07:31:43 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		wordcnt;
	int		start;

	words = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (words == NULL)
		return (NULL);
	wordcnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = *s;
			while (*s && *s != c)
				s++;
			words[wordcnt] = (char *)malloc(sizeof(char) * (*s - start + 1));
			if (words[wordcnt] == NULL)
				return (NULL);
			ft_strlcpy(words[wordcnt], &s[start], *s - start + 1);
			wordcnt++;
		}
		s++;
	}
	words[wordcnt] = NULL;
	return (words);
}

int	main(void)
{
	count("Hello,World,Piscine,42", ',');
	ft_split("Hello,World,pisicne,this,was,not,fun", ',');
}