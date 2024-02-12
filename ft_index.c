/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:41:57 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/10 14:33:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// count the numbers in the stack
int	ft_total(t_stack_lst *lst)
{
	t_stack_lst	*current;
	int			total;

	current = lst;
	total = 0;
	while (current)
	{
		current = current->next;
		total++;
	}
	return (total);
}
// set the index of the numbers like a mirror when the median is encounter
// I use a decrementation when it is an odd list to keep the 
// 0 index only for the first numbers of the list

void	ft_index(t_stack_lst *lst)
{
	t_stack_lst	*current;
	int			i;
	int			total;

	if (!lst)
		return ;
	total = ft_total(lst);
	current = lst;
	i = 0;
	while (current)
	{
		current->index = i;
		if (i == total / 2)
		{
			if (ft_count(&lst) % 2 == 0)
				i--;
			while (i > 0)
			{
				current = current->next;
				current->index = i--;
			}
		}
		current = current->next;
		i++;
	}
}
