/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_groups.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:47:10 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/18 16:13:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_groups_more(t_stack_lst **a, t_stack_lst **b, int stack_len)
{
	t_stack_lst	*curr;
	int			i;
	int			j;

	i = 2;
	while (ft_count(a) >= 3)
	{
		j = 0;
		while (j < stack_len / 3 && ft_count(a) >= 3)
		{
			curr = *a;
			if (curr->final_pos >= stack_len / 3 * i)
			{
				ft_pb(a, b, 1);
				j++;
			}
			else
				ft_ra(a, 1);
		}
		i--;
	}
}

void	ft_groups(t_stack_lst **a, t_stack_lst **b)
{
	int			stack_len;

	stack_len = ft_count(a);
	if (stack_len == 3)
		return ;
	if (stack_len == 5)
	{
		while (ft_count(a) > 3)
			ft_pb(a, b, 1);
	}
	else
		ft_groups_more(a, b, stack_len);
}
