/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:14:30 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 20:27:12 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	isneg(int n)
{
	return (n < 0);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		intlen;
	int		neg;
	int		digit;

	if (n == 0)
		return (ft_strdup("0"));
	digit = 0;
	neg = isneg(n);
	intlen = intlen(n);
	ptr = malloc((intlen + neg + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[intlen + neg] = '\0';
	while (n != 0)
	{
		digit = n % 10;
		n /= 10;
		ptr[intlen-- + neg - 1] = abs(digit) + '0';
	}
	if (neg)
		ptr[0] = '-';
	return (ptr);
}
