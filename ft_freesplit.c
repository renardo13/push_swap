/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freesplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:47:07 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/11 17:51:05 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freesplit(char **strs, int n)
{
	if (strs[n])
		return ;
	while (strs[n])
		free(strs[n--]);
	free(strs);
	return ;
}

void	ft_free(char **av)
{
	int	i;

	i = 0;
	if (!av || !*av)
		return ;
	while (av[i])
		free(av[i++]);
	free(av);
	return ;
}
