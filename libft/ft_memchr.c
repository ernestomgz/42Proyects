/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:29:16 by ernesmar          #+#    #+#             */
/*   Updated: 2023/01/13 17:36:21 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	ch;
	char	*str;
	size_t	i;

	i = 0;
	ch = (char) c;
	str = (char *) s;
	while (i < n)
	{
		if (*(str + i) == ch)
			return ((void *) str + i);
		i++;
	}
	return (NULL);
}
