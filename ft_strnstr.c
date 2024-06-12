/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:29:47 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 18:48:16 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *) s);
	i = 0;
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == needle[j] && s[i + j] && needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
