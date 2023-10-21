/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:16:06 by ernesmar          #+#    #+#             */
/*   Updated: 2023/01/28 12:54:25 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c += 'A' - 'a';
	return (c);
}

char	*ft_strupper(char *strlower)
{
	int	i;

	i = 0;
	if (!strlower)
		return (NULL);
	while (*(strlower + i) != 0)
	{
		*(strlower + i) = ft_toupper(*(strlower + i));
		i++;
	}
	return (strlower);
}
