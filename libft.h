/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <dcortes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:19:12 by dcortes           #+#    #+#             */
/*   Updated: 2024/06/12 17:46:05 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

int	ft_isascii(int c);
int	ft_isprint(int c);

int	ft_islower(int c);
int	ft_isupper(int c);

int	ft_tolower(int c);
int	ft_toupper(int c);

#endif