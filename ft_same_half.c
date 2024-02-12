/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_same_half.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:39 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/10 14:34:25 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_first_half(t_stack_lst **lst, t_stack_lst *cheapest)
{
	int			median;
	int			i;
	t_stack_lst	*current;

	i = 0;
	median = ft_count(lst) / 2 + 1;
	current = *lst;
	if (cheapest->index <= median)
	{
		while (current)
		{
			if (current == cheapest)
				break ;
			i++;
			current = current->next;
		}
		if (i < median)
			return (1);
	}
	return (0);
}

int	ft_same_half(t_stack_lst **a, t_stack_lst **b)
{
	if (ft_first_half(a, *a) && ft_first_half(b, *b))
		return (1);
	else if (!(ft_first_half(a, *a) && ft_first_half(b, *b)))
		return (1);
	return (0);
}
