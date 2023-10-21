/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:56:56 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/03 14:19:08 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const unsigned char *s1, const unsigned char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && *(s2 + i) && *(s1 + i))
	{
		if (*(s1 + i) < *(s2 + i))
			return (-1);
		if (*(s1 + i) > *(s2 + i))
			return (1);
		i++;
	}
	if (*(s1 + i) < *(s2 + i))
		return (-1);
	if (*(s1 + i) > *(s2 + i))
		return (1);
	return (0);
}
