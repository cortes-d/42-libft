/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:15:21 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 18:46:23 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((const char *)s1)[i] == ((const char *)s2)[i] && i < (n - 1))
		i++;
	return (((unsigned const char *)s1)[i] - ((unsigned const char *)s2)[i]);
}
