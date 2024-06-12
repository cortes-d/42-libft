/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:42:13 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 19:20:55 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	end = ft_strlen(s1);

	while (s1[start] && ft_strchr(set, s1[start]))
		start++;

	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;

	return (ft_substr(s1, start, end - start));
}
