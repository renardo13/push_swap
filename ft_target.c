/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_target.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:56 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/10 13:54:23 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// calculate the target in fonction of the numbers in stack A that is just
// above the numbers in B in order to push A in ascending order at the end
// the target has to be always above the numbers in B,
// so when we do the target minus the numbers we'll
// have always a positive difference
void	ft_target(t_stack_lst **a, t_stack_lst **b)
{
	t_stack_lst	*currenta;
	t_stack_lst	*currentb;
	int			i;
	int			j;

	currentb = *b;
	while (currentb)
	{
		j = INT_MAX;
		currenta = *a;
		while (currenta)
		{
			i = currenta->content - currentb->content;
			if (i > 0 && i < j)
			{
				currentb->target = currenta;
				j = i;
			}
			currenta = currenta->next;
		}
		currentb = currentb->next;
	}
}
