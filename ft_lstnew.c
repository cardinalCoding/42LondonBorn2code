/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:42:13 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/10 16:45:56 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *)malloc(sizeof(*elt));
	if (!(elt))
		return (NULL);
	elt ->content = content;
	elt ->next = NULL;
	return (elt);
}
/*int main() {
    // Test Case 1: Creating a new node with integer content
    int *data1 = (int *)malloc(sizeof(int));
    *data1 = 42;
    t_list *node1 = ft_lstnew(data1);

    // Test Case 2: Creating a new node with string content
    char *data2 = "Hello, World!";
    t_list *node2 = ft_lstnew(data2);

    // Test Case 3: Creating a new node with NULL content
    t_list *node3 = ft_lstnew(NULL);

    // Test Case 4: Creating a new node with a custom struct as content
    typedef struct {
        int x;
        int y;
    } Point;
    Point *point = (Point *)malloc(sizeof(Point));
    point->x = 10;
    point->y = 20;
    t_list *node4 = ft_lstnew(point);

    // Displaying the results
    printf("Test Case 1: %p\n", (void *)node1);
    printf("Test Case 2: %p\n", (void *)node2);
    printf("Test Case 3: %p\n", (void *)node3);
    printf("Test Case 4: %p\n", (void *)node4);

    // Freeing allocated memory
    free(data1);
    free(node1);
    free(node2);
    free(node3);
    free(point);
    free(node4);

    return 0;
}*/