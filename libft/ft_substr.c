/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:15:26 by ernesmar          #+#    #+#             */
/*   Updated: 2023/01/13 17:56:39 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > (unsigned int) ft_strlen(s))
		start = ft_strlen(s);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	output = malloc(sizeof(char) * (len + 1));
	if (output == NULL)
		return (NULL);
	if (start >= (unsigned int) ft_strlen(s) + 1)
	{
		*output = '\0';
		return (output);
	}
	s += start;
	while (*(s + (++i)-1) != '\0' && len-- > 0)
		*(output + i - 1) = *(s + i - 1);
	*(output + i - 1) = '\0';
	return (output);
}
