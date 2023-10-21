/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:01:47 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/04 11:39:33 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 1;
	s1 = (unsigned char *)mem1;
	s2 = (unsigned char *)mem2;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
