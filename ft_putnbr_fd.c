/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 23:07:18 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 19:41:07 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_fd_rec(int nb, int fd)
{
	if (nb >= -9 && nb <= 9)
	{
		if (nb < 0)
			nb = -nb;
		ft_putchar_fd(nb + '0', fd);
	}
	else
	{
		putnbr_fd_rec(nb / 10, fd);
		putnbr_fd_rec(nb % 10, fd);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
		ft_putchar_fd('-', fd);
	putnbr_fd_rec(nb, fd);
}
