/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:20:13 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 12:05:44 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char my_function(unsigned int i, char c)
{

    if (i % 2 == 0)

        return (toupper(c));

    else

        return (tolower(c));

}

int main()
{

    char *result;

    char str[] = "\0";


    result = ft_strmapi(str, my_function);

    if (result != NULL)

    {

        printf("%s\n", result);

        free(result);

    }

    else

    {

        printf("Error: result is NULL.\n");

    }

    return (0);

}*/