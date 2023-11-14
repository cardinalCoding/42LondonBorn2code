/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:50:55 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 17:13:33 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new ->next = *lst;
		*lst = new;
	}
}
/*int main()
{

    t_list *head = NULL;

    t_list *node1 = (t_list *) malloc(sizeof(t_list));

    node1->content = "Hello";

    node1->next = NULL;


    t_list *node2 = (t_list *) malloc(sizeof(t_list));

    node2->content = "World";

    node2->next = NULL;


    ft_lstadd_front(&head, node1);

    ft_lstadd_front(&head, node2);


    while (head) {

        printf("%s -> ", (char *) head->content);

        head = head->next;
    }
    printf("NULL\n");
    return 0;
}*/