/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:17:45 by ernesmar          #+#    #+#             */
/*   Updated: 2023/01/28 12:52:54 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	digits_base(unsigned long long n, int base)
{
	int	num_digits;

	num_digits = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		num_digits++;
		n /= base;
	}
	return (num_digits);
}

int	digits_base_pos(unsigned int n, int base)
{
	int	num_digits;

	num_digits = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		num_digits++;
		n /= base;
	}
	return (num_digits);
}

char	*ft_itoa_base(unsigned long long nb, int base)
{
	char				*num;
	int					pos;
	unsigned long long	n;
	char				*alphabet;

	alphabet = ft_strdup("0123456789abcdef");
	n = nb;
	num = malloc(sizeof(char) * ((pos = digits_base(n, base)) + 1));
	if (!(num))
		return (NULL);
	*(num + pos--) = 0;
	if (n == 0)
		*num = '0';
	if (n < 0)
	{
		*num = '-';
		n = -n;
	}
	while (n > 0)
	{
		*(num + pos--) = alphabet[n % base];
		n /= base;
	}
	free(alphabet);
	return (num);
}

char	*ft_itoa_base_pos(unsigned int nb, int base)
{
	char			*num;
	int				pos;
	unsigned int	n;
	char			*alphabet;

	alphabet = ft_strdup("0123456789abcdef");
	n = nb;
	num = malloc(sizeof(char) * ((pos = digits_base_pos(n, base)) + 1));
	if (!(num))
		return (NULL);
	*(num + pos--) = 0;
	if (n == 0)
		*num = '0';
	while (n != 0)
	{
		*(num + pos--) = alphabet[n % base];
		n /= base;
	}
	free(alphabet);
	return (num);
}
