/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:13:47 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/23 15:09:43 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			ft_lstlast(*lst)->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
