/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:42:35 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/18 00:25:44 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static int	is_valid_base(char *charset)
{
	char	*ptr;

	if (!charset || ft_strlen(charset) <= 1)
		return (0);
	if (ft_strchr(charset, '+') || ft_strchr(charset, '-'))
		return (0);
	while (*charset)
	{
		if (ft_isspace(*charset))
			return (0);
		if (ft_strchr(charset + 1, *charset))
			return (0);
		charset++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *charset)
{
	int	base;
	int	sign;
	int	number;

	if (!str && !is_valid_base(charset))
		return (0);
	base = (int)ft_strlen(charset);
	sign = 1;
	number = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_strchr(charset, *str))
	{
		number = number * base + (ft_strchr(charset, *str) - charset);
		str++;
	}
	return (sign * number);
}
