/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:41:42 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/10 14:31:55 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Double pointers to start counting from 
// the first element of the list set the index also
int	ft_count(t_stack_lst **lst)
{
	t_stack_lst	*current;
	int			i;

	current = *lst;
	i = 0;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
