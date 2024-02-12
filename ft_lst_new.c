/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:03 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/24 12:41:21 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_lst	*ft_lst_new(int nbr)
{
	t_stack_lst	*new_node;

	new_node = malloc(sizeof(t_stack_lst));
	if (!new_node)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->target = NULL;
	new_node->content = nbr;
	new_node->score = INT_MAX;
	new_node->index = 0;
	new_node->final_pos = 0;
	return (new_node);
}
