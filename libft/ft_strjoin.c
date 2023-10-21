/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:12:53 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/16 17:37:14 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	int		len1;
	int		len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	output = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (output == NULL)
		return (NULL);
	*(output) = '\0';
	ft_strlcat(output, (char *)s1, len1 + 1);
	ft_strlcat(output, (char *)s2, len1 + len2 + 1);
	return (output);
}
