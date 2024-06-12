/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:11:20 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 21:00:38 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_substrings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0)
		{
			if (s[i] != c)
				count++;
		}
		else
		{
			if (s[i - 1] == c && s[i] != c)
				count++;
		}
		i++;
	}
	return (count);
}

static size_t	substring_length(char const *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	else
		return (ft_strchr(s, c) - s);
}

static void	*free_splits(char **lst, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(lst[j]);
		j++;
	}
	free(lst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	substrlen;
	int		i;

	lst = (char **)malloc((count_substrings(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			substrlen = substring_length(s, c);
			lst[i] = ft_substr(s, 0, substrlen);
			if (!lst[i])
				return (free_splits(lst, i));
			s += substrlen;
			i++;
		}
	}
	lst[i] = NULL;
	return (lst);
}
