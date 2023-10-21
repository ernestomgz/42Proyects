/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:48:51 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/03 11:26:04 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, int n)
{
	int				i;
	unsigned char	*dst_str;
	unsigned char	*src_str;

	i = 0;
	dst_str = (unsigned char *) dst;
	src_str = (unsigned char *) src;
	if (dst_str == NULL && src_str == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (n > i)
		{
			*(dst_str + i) = *(src_str + i);
			i++;
		}
	}
	if (dst > src)
	{
		while (n--)
			*(dst_str + n) = *(src_str + n);
	}
	return (dst_str);
}
