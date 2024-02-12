/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:12 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/19 12:48:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstaddfront(t_stack_lst **head, t_stack_lst *new_node)
{
	if (head && new_node)
	{
		if (*head)
			(*head)->prev = new_node;
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
	}
}
