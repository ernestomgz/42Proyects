/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:09:20 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/01 17:11:38 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t l);

void	*ft_bzero(void *b, size_t l)
{
	if (l > 0)
		ft_memset(b, 0, l);
	return (b);
}
