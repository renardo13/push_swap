/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:01:47 by melmarti          #+#    #+#             */
/*   Updated: 2024/02/01 18:59:25 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_free_error(t_stack_lst **a, t_stack_lst **b, char *instr)
{
	free(instr);
	ft_lstclear(a);
	ft_lstclear(b);
	ft_get_next_line(0, 1);
	ft_error();
	exit(0);
}

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	if (i == ft_strlen(s2))
		return (1);
	else
		return (0);
}

void	ft_checker(t_stack_lst **a, t_stack_lst **b, char *instr)
{
	if (ft_strcmp("sa\n", instr))
		ft_sa(a, 0);
	else if (ft_strcmp("sb\n", instr))
		ft_sb(b, 0);
	else if (ft_strcmp("ra\n", instr))
		ft_ra(a, 0);
	else if (ft_strcmp("rra\n", instr))
		ft_rra(a, 0);
	else if (ft_strcmp("rb\n", instr))
		ft_rb(b, 0);
	else if (ft_strcmp("rrb\n", instr))
		ft_rrb(b, 0);
	else if (ft_strcmp("rr\n", instr))
		ft_rr(a, b, 0);
	else if (ft_strcmp("rrr\n", instr))
		ft_rrr(a, b, 0);
	else if (ft_strcmp("pa\n", instr))
		ft_pa(b, a, 0);
	else if (ft_strcmp("pb\n", instr))
		ft_pb(a, b, 0);
	else if (ft_strcmp("ss\n", instr))
		ft_ss(a, b, 0);
	else
		ft_free_error(a, b, instr);
}
