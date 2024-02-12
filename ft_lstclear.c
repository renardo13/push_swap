/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:14 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/19 12:48:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_stack_lst **lst)
{
	t_stack_lst	*next;
	t_stack_lst	*curr;

	if (!lst || !(*lst))
		return ;
	curr = *lst;
	while (curr)
	{
		next = (curr)->next;
		if (curr->prev)
			curr->prev = NULL;
		curr->target = NULL;
		curr->next = NULL;
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
