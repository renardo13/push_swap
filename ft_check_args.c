/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:41:39 by melmarti          #+#    #+#             */
/*   Updated: 2024/02/09 15:00:25 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ** Parsing arguments from the user and
// initializing A list **
// if there are only two argument the
// index starts from 0 because we already did ft_split
// create new nodes and initialize A list
// treatment are different according the argument counter (ac)

void	ft_parse(int ac, char **av, t_stack_lst **a)
{
	int			i;
	long int	nbr;

	if (ac == 2)
		i = 0;
	else
		i = 1;
	while (av[i])
	{
		nbr = (ft_atol(av[i]));
		if (nbr > INT_MAX || nbr < INT_MIN)
			exit(ft_error());
		ft_lstaddback(a, ft_lst_new(nbr));
		i++;
	}
	if (ac == 2)
		ft_free(av);
}

int	ft_check_duplicate(int ac, char **av)
{
	int	j;
	int	i;

	if (ac > 2)
		i = 1;
	else
		i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atol(av[j]) == ft_atol(av[i]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_special_char(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != ' ')
			return (1);
		if ((str[i] == '-' && str[i - 1] != ' ') && i != 0)
			return (1);
		i++;
	}
	if (i == 1 && (str[0] < '0' || str[0] > '9'))
		return (1);
	return (0);
}

int	ft_check_and_parse_args(int ac, char **av, t_stack_lst **a)
{
	int	i;

	i = 1;
	if (av[i][0] == '\0')
		exit(ft_error());
	while (av[i])
	{
		if (ft_special_char(av[i]))
			exit(ft_error());
		if (is_space(av[i]))
			exit(ft_error());
		i++;
	}
	if (ac == 2)
		av = ft_split(av[1], ' ');
	if (ft_check_duplicate(ac, av))
		exit(ft_error());
	ft_parse(ac, av, a);
	return (1);
}
