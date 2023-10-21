/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:43:23 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/16 19:40:10 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;

	if (s1 == NULL && set == NULL)
		return (NULL);
	while (*s1 != 0 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set,*(s1 + len)) && len > 0)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
