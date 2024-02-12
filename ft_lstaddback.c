/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:09 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/19 12:48:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_lst	*ft_lstlast(t_stack_lst *lst)
{
	t_stack_lst	*current;

	current = lst;
	while (current->next)
	{
		current = current->next;
	}
	return (current);
}

void	ft_lstaddback(t_stack_lst **lst, t_stack_lst *new_node)
{
	t_stack_lst	*last;

	if (!new_node)
		return ;
	if (!*lst)
	{
		*lst = new_node;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new_node;
	new_node->prev = last;
}
