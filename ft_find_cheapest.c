/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:41:49 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:41:50 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_lst	*ft_find_cheapest(t_stack_lst **b, t_stack_lst **a)
{
	t_stack_lst	*current;
	t_stack_lst	*cheapest;

	if (ft_count(b) < 1)
		return (NULL);
	current = *b;
	cheapest = *b;
	while (current->next)
	{
		if (current->next->score < cheapest->score)
			cheapest = current->next;
		current = current->next;
	}
	if (!cheapest->target)
	{
		cheapest->target = ft_find_min(a);
		ft_sort_end(a);
	}
	return (cheapest);
}
