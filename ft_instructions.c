/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:00 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/18 14:07:40 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_optimize(t_stack_lst *cheapest, t_stack_lst **a, t_stack_lst **b)
{
	int	move_b;
	int	move_a;

	move_b = cheapest->index;
	move_a = cheapest->target->index;
	while (ft_first_half(b, cheapest) && ft_first_half(a, cheapest->target)
		&& move_a && move_b)
	{
		ft_rr(a, b, 1);
		move_a--;
		move_b--;
	}
	while (!ft_first_half(b, cheapest) && !ft_first_half(a, cheapest->target)
		&& move_a && move_b)
	{
		ft_rrr(a, b, 1);
		move_a--;
		move_b--;
	}
	cheapest->index = move_b;
	cheapest->target->index = move_a;
}

void	ft_instructions(t_stack_lst *cheapest, t_stack_lst **b, t_stack_lst **a)
{
	int	move_b;
	int	move_a;

	if (!cheapest)
		return ;
	ft_optimize(cheapest, a, b);
	move_b = cheapest->index;
	move_a = cheapest->target->index;
	while (move_b)
	{
		if (ft_first_half(b, cheapest))
			ft_rb(b, 1);
		else
			ft_rrb(b, 1);
		move_b--;
	}
	while (move_a)
	{
		if (ft_first_half(a, cheapest->target))
			ft_ra(a, 1);
		else
			ft_rra(a, 1);
		move_a--;
	}
	ft_pa(b, a, 1);
}
