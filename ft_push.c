/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:31 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/19 12:48:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack_lst **b, t_stack_lst **a, int print)
{
	t_stack_lst	*tmp;

	if (ft_count(b) < 1)
		return ;
	tmp = (*b)->next;
	ft_lstaddfront(a, *b);
	if (tmp)
	{
		tmp->prev = NULL;
		*b = tmp;
	}
	else
		*b = NULL;
	if (print == 1)
		write(1, "pa\n", 3);
}

void	ft_pb(t_stack_lst **a, t_stack_lst **b, int print)
{
	t_stack_lst	*tmp;

	if (ft_count(a) < 1)
		return ;
	tmp = (*a)->next;
	ft_lstaddfront(b, *a);
	if (tmp)
	{
		tmp->prev = NULL;
		*a = tmp;
	}
	else
		*a = NULL;
	if (print == 1)
		write(1, "pb\n", 3);
}
