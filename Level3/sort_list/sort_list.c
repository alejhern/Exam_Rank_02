/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:56:44 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/04 20:17:27 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ilist.h"
#include <stdio.h>
#include <stdlib.h>
/*
int	ascending(int a, int b)
{
	return (a <= b);
}
*/
t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*current;
	int		temp;
	t_list	*next;

	if (!lst)
		return (NULL);
	current = lst;
	while (current)
	{
		next = current->next;
		while (next)
		{
			if (!cmp(current->data, next->data))
			{
				temp = current->data;
				current->data = next->data;
				next->data = temp;
			}
			next = next->next;
		}
		current = current->next;
	}
	return (lst);
}
/*
t_list	*create_node(int data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
	{
		perror("Error al asignar memoria");
		exit(EXIT_FAILURE);
	}
	node->data = data;
	node->next = NULL;
	return (node);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", (lst->data));
		lst = lst->next;
	}
	printf("NULL\n");
}

void	free_list(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst;
		lst = lst->next;
		free(temp);
	}
}

int	main(void)
{
	t_list	*lst;

	// Crear una lista enlazada: 4 -> 3 -> 1 -> 2 -> 5 -> NULL
	lst = create_node(4);
	lst->next = create_node(3);
	lst->next->next = create_node(1);
	lst->next->next->next = create_node(2);
	lst->next->next->next->next = create_node(5);
	printf("Lista original:\n");
	print_list(lst);
	lst = sort_list(lst, ascending);
	printf("Lista ordenada (ascendente):\n");
	print_list(lst);
	free_list(lst);
	return (0);
}
*/
