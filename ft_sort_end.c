/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:47 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/10 14:11:30 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// at the end of the list, the minimum may not be at the top
void	ft_sort_end(t_stack_lst **a)
{
	t_stack_lst	*min;
	int			i;

	min = ft_find_min(a);
	i = min->index;
	if (ft_first_half(a, min))
	{
		while (i > 0)
		{
			ft_ra(a, 1);
			i--;
		}
	}
	else
	{
		while (i > 0)
		{
			ft_rra(a, 1);
			i--;
		}
	}
}
