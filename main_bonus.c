/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:01:21 by melmarti          #+#    #+#             */
/*   Updated: 2024/02/09 17:32:57 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_lst	*a;
	t_stack_lst	*b;
	char		*line;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	ft_check_and_parse_args(ac, av, &a);
	line = ft_get_next_line(0, 0);
	while (line)
	{
		ft_checker(&a, &b, line);
		f+ree(line);
		line = ft_get_next_line(0, 0);
	}
	free(line);
	if (ft_lst_sort(&a) && ft_count(&b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstclear(&b);
	ft_lstclear(&a);
	return (0);
}
