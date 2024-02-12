/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:44 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:42:45 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stack_lst **a)
{
	t_stack_lst	*last;
	t_stack_lst	*second;

	second = (*a)->next;
	last = ft_lstlast(*a);
	if ((*a)->content > second->content && last->content > (*a)->content)
		ft_sa(a, 1);
	else if ((*a)->content > second->content && (*a)->content > last->content
		&& second->content < last->content)
		ft_ra(a, 1);
	else if (last->content < (*a)->content && (*a)->content < second->content
		&& last->content < second->content)
		ft_rra(a, 1);
	else if ((*a)->content > second->content && (*a)->content > last->content
		&& second->content > last->content)
	{
		ft_ra(a, 1);
		ft_sa(a, 1);
	}
	else if ((*a)->content < last->content && last->content < second->content)
	{
		ft_rra(a, 1);
		ft_sa(a, 1);
	}
}
