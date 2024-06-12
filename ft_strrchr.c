/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:27:40 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 20:59:13 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;
	char			*last;

	i = 0;
	cc = (unsigned char) c;
	last = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			last = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		last = (char *) &s[i];
	return (last);
}
