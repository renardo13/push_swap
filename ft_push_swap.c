/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:26 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/17 15:37:12 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// we will split the group in 3 to pre-sort in B,
// after we will sort the 3 numbers left in A
// and we will execute the loop to execute the sorting algorithm
void	ft_push_swap(t_stack_lst **a)
{
	t_stack_lst	*b;
	t_stack_lst	*cheapest;

	b = NULL;
	ft_ascendant(a);
	ft_groups(a, &b);
	ft_sort_3(a);
	while (ft_count(&b) > 0)
	{
		ft_index(b);
		ft_index(*a);
		ft_target(a, &b);
		ft_score(a, &b);
		cheapest = ft_find_cheapest(&b, a);
		ft_index(b);
		ft_index(*a);
		ft_instructions(cheapest, &b, a);
	}
	ft_index(*a);
	ft_sort_end(a);
	ft_lstclear(a);
}
