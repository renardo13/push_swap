/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:41:52 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/10 14:32:27 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_lst	*ft_find_min(t_stack_lst **lst)
{
	t_stack_lst	*min_node;
	t_stack_lst	*current;

	current = *lst;
	min_node = *lst;
	while (current)
	{
		if (current->content < min_node->content)
			min_node = current;
		current = current->next;
	}
	return (min_node);
}
