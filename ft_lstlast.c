/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:21:41 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 17:35:38 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*int main() 
{

    t_list *list = NULL;


    // Adding elements to the list

    list = (t_list *) malloc(sizeof(t_list));

    list->content = "Hello";

    list->next = NULL;


    list->next = (t_list *) malloc(sizeof(t_list));

    list->next->content = "World";

    list->next->next = NULL;


    // Retrieving the last element in the list

    t_list *last = ft_lstlast(list);


    if (last != NULL)
        printf("Last element: %s\n", (char *) last->content);
    else
        printf("The list is empty.\n");
    return 0;
}*/