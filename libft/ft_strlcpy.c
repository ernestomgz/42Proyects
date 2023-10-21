/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:08:23 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/03 11:56:01 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str);

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	count;
	size_t	lenght;

	count = 0;
	lenght = ft_strlen(src);
	if (dstsize > 0)
	{
		while (count + 1 < dstsize && *src != 0)
		{
			*(dst) = *(src);
			dst++;
			src++;
			count++;
		}
		*dst = 0;
	}
	return (lenght);
}
