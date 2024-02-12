/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:17 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/19 12:48:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// fonctions to print the list

void	ft_lstprint(t_stack_lst **lst, char *liste)
{
	t_stack_lst	*current;

	current = *lst;
	printf("\n\n[**%s**]\n", liste);
	while (current)
	{
		printf("\n\n     <- <- prev [%p]\n", current->prev);
		printf("\n|%d|  [[%p]]\n", current->content, current);
		printf("INDEX  : [%d]\n", current->index);
		printf("SCORE  : [%d]\n", current->score);
		printf("FINAL POS  : [%d]\n", current->final_pos);
		if (current->target)
			printf("TARGET : [%d]\n", current->target->content);
		printf("     NEXT -> ->    [%p]\n", current->next);
		current = current->next;
	}
	printf("\nNombre total dans la %s #%d\n", liste, ft_count(lst));
}
