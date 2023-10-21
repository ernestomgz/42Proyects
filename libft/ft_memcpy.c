/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:51:52 by ernesmar          #+#    #+#             */
/*   Updated: 2023/01/13 17:33:15 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_str;
	unsigned char	*src_str;

	i = 0;
	dst_str = (unsigned char *) dst;
	src_str = (unsigned char *) src;
	if (dst_str == NULL && src_str == NULL)
		return (NULL);
	while (n > i)
	{
		*(dst_str + i) = *(src_str + i);
		i++;
	}
	return (dst_str);
}
