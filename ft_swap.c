/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:53 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/19 12:48:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack_lst **a, int print)
{
	t_stack_lst	*first;
	t_stack_lst	*second;

	if (ft_count(a) < 2)
		return ;
	if (print != 0)
		write(1, "sa\n", 3);
	first = *a;
	second = (*a)->next;
	if (second->next)
	{
		first->next = second->next;
		first->next->prev = first;
	}
	else
		first->next = NULL;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	*a = second;
}

void	ft_sb(t_stack_lst **b, int print)
{
	t_stack_lst	*first;
	t_stack_lst	*second;

	if (ft_count(b) < 2)
		return ;
	if (print != 0)
		write(1, "sb\n", 3);
	first = *b;
	second = (*b)->next;
	if (second->next)
	{
		first->next = second->next;
		first->next->prev = first;
	}
	else
		first->next = NULL;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	*b = second;
}
