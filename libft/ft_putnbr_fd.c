/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:02:02 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/23 12:25:01 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	char	c;
	int		pos;
	long	n;

	n = nbr;
	pos = digits(n);
	if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n / 10 > 0)
			ft_putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		ft_putchar_fd(c, fd);
	}
}
