/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:59 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/19 12:48:34 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check and initialize A list if the arguments are corrects
int	main(int ac, char **av)
{
	t_stack_lst	*a;

	a = NULL;
	if (ac < 2)
		return (0);
	ft_check_and_parse_args(ac, av, &a);
	if (ft_lst_sort(&a) || ((a)->prev == NULL && (a)->next == NULL))
	{
		ft_lstclear(&a);
		return (0);
	}
	ft_push_swap(&a);
}
