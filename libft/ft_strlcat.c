/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:58:58 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/03 13:27:07 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str);

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	ldes;
	size_t	lsrc;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (dest[j] != 0)
		j++;
	ldes = j;
	lsrc = ft_strlen(src);
	if (size == 0 || size <= ldes)
		return (size + lsrc);
	while (*(src + i) != 0 && i < size - ldes - 1)
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = 0;
	return (ldes + lsrc);
}
