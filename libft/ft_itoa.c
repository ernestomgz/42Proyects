/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:17:45 by ernesmar          #+#    #+#             */
/*   Updated: 2023/01/28 12:50:31 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	digits(long n)
{
	int	num_digits;

	num_digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		num_digits++;
	}
	while (n > 0)
	{
		num_digits++;
		n /= 10;
	}
	return (num_digits);
}

int	pow10(int exponent)
{
	int	result;

	result = 1;
	while (exponent-- > 0)
		result *= 10;
	return (result);
}

char	*ft_itoa(int nb)
{
	char	*num;
	int		pos;
	long	n;

	n = nb;
	num = malloc(sizeof(char) * ((pos = digits(n)) + 1));
	if (!(num))
		return (NULL);
	*(num + pos--) = 0;
	if (n == 0)
	{
		*num = '0';
		return (num);
	}
	if (n < 0)
	{
		*num = '-';
		n = -n;
	}
	while (n > 0)
	{
		*(num + pos--) = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}

char	*ft_itoa_pos(unsigned int nb)
{
	char	*num;
	int		pos;
	long	n;

	n = nb;
	num = malloc(sizeof(char) * ((pos = digits(n)) + 1));
	if (!(num))
		return (NULL);
	*(num + pos--) = 0;
	if (n == 0)
	{
		*num = '0';
		return (num);
	}
	while (n != 0)
	{
		*(num + pos--) = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}
