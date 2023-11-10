/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:14:35 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 17:20:55 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
int main() {
    t_list *head = NULL;
    t_list *node1 = (t_list *) malloc(sizeof(t_list));
    node1->content = "Hello";
    node1->next = NULL;

    t_list *node2 = (t_list *) malloc(sizeof(t_list));
    node2->content = "World";
    node2->next = NULL;

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);

    int size = ft_lstsize(head);
    printf("Size of linked list: %d\n", size);

    return 0;
}