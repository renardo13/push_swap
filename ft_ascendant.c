/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascendant.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:46:55 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/10 14:31:46 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_pos(t_stack_lst *curr, t_stack_lst *currenta)
{
	int	tmp;

	tmp = currenta->final_pos;
	currenta->final_pos = curr->final_pos;
	curr->final_pos = tmp;
}

void	ft_set_pos(t_stack_lst *curr)
{
	int			index;

	index = 0;
	while (curr)
	{
		curr->final_pos = index;
		index++;
		curr = curr->next;
	}
}

void	ft_ascendant(t_stack_lst **a)
{
	t_stack_lst	*currenta;
	t_stack_lst	*curr;
	int			stack_len;

	curr = *a;
	ft_set_pos(curr);
	stack_len = ft_count(a);
	while (stack_len > 1)
	{
		curr = *a;
		while (curr)
		{
			currenta = *a;
			while (currenta)
			{
				if (curr->content > currenta->content
					&& curr->final_pos < currenta->final_pos)
					ft_swap_pos(curr, currenta);
				currenta = currenta->next;
			}
			curr = curr->next;
		}
		stack_len--;
	}
}
