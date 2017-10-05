/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlouar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 21:57:50 by hlouar            #+#    #+#             */
/*   Updated: 2015/12/07 17:34:52 by hlouar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(long int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd(45, fd);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + 48, fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}
