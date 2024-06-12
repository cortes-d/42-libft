/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:31:24 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 18:31:04 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	position;

	i = 0;
	position = 0;
	if (!dst && !src)
		return (NULL);
	while (i < len)
	{
		if (src < dst)
			position = (len - 1 - i);
		else
			position = i;
		((unsigned char *)dst)[position] = ((unsigned char *)src)[position];
		i++;
	}
	return (dst);
}
