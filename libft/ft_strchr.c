/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:55:46 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/03 13:47:19 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char) c;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == ch)
			return ((char *) s + i);
		i++;
	}
	if (*(s + i) == ch)
		return ((char *) s + i);
	return (0x0);
}
