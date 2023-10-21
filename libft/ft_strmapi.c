/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:40:46 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/23 11:41:21 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*mapped;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	mapped = malloc(sizeof(char) * (size + 1));
	if (!mapped)
		return (NULL);
	while (i < size)
	{
		*(mapped + i) = f(i, *(s + i));
		i++;
	}
	*(mapped + i) = 0;
	return (mapped);
}
