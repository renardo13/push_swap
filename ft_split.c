/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:51 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/15 15:30:06 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_len(char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static int	ft_is_c(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static size_t	ft_count_words(char *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] && ft_is_c(s[i], c) == 1)
			i++;
		if (s[i])
			counter++;
		while (s[i] && ft_is_c(s[i], c) == 0)
			i++;
	}
	return (counter);
}

char	**ft_split(char *s, char c)
{
	size_t	i;
	size_t	n;
	char	**strs;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] && ft_is_c(s[i], c) == 1)
			i++;
		if (s[i] && ft_is_c(s[i], c) == 0)
		{
			strs[n++] = ft_substr(s, i, ft_len(&s[i], c));
			ft_freesplit(strs, n - 1);
		}
		while (s[i] && ft_is_c(s[i], c) == 0)
			i++;
	}
	strs[n] = NULL;
	return (strs);
}
