/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:01:30 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 18:23:12 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del == NULL || lst == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*void print_content(void *content)
{
    printf("%s\n", (char *)content);
}
int main()
{
    // Creating a linked list with two nodes
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));

    node1->content = "Hello";
    node1->next = node2;

    node2->content = "World";
    node2->next = NULL;

    // Deleting the first node
    ft_lstdelone(node1, print_content);

    // At this point, the linked list only contains the second node

    return 0;
}*/