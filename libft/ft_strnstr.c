/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:22:57 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/03 20:24:06 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	pos;

	pos = 0;
	if (*needle == 0)
		return ((char *) haystack);
	while (len-- && *(haystack))
	{
		if (*haystack == *(needle + pos))
			pos++;
		else
		{
			(haystack) = (haystack - pos);
			len += pos;
			pos = 0;
		}
		if (*(needle + pos) == 0)
			return ((char *) haystack - pos + 1);
		haystack++;
	}
	return (NULL);
}
