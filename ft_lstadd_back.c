/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:34:07 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 18:01:04 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (lst)
	{
		if (*lst)
		{
			back = ft_lstlast(*lst);
			back->next = new;
		}
		else
			*lst = new;
	}
}
/*int main() 
{
    t_list *lst = NULL;
    // Creating new elements and adding them to the list
    t_list *new_element1 = (t_list *) malloc(sizeof(t_list));
    new_element1->content = "First";
    new_element1->next = NULL;
    t_list *new_element2 = (t_list *) malloc(sizeof(t_list));
    new_element2->content = "Second";
    new_element2->next = NULL;
    ft_lstadd_back(&lst, new_element1);
    ft_lstadd_back(&lst, new_element2);
    while (lst) {
        printf("%s ->\n", (char *) lst->content);
        lst = lst->next;
    }
    // Now the list contains the two new elements, "First" and "Second"
    return 0;
}*/