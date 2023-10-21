/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:10:41 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/23 15:11:04 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*temp2;

	if (lst == NULL || del == NULL)
		return ;
	temp = *lst;
	temp2 = *lst;
	while (temp != NULL)
	{
		temp2 = temp2->next;
		del(temp->content);
		free(temp);
		temp = temp2;
	}
		*lst = NULL;
}
