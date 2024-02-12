/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:41 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:42:42 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_score(t_stack_lst **a, t_stack_lst **b)
{
	t_stack_lst	*currentb;

	currentb = *b;
	while (currentb)
	{
		while (!currentb->target && currentb->next)
			currentb = currentb->next;
		if (currentb && currentb->target
			&& currentb->index == currentb->target->index && ft_same_half(a, b))
			currentb->score = ((currentb->index + currentb->target->index) / 2);
		else if (currentb->target)
			currentb->score = currentb->target->index + currentb->index;
		currentb = currentb->next;
	}
}
