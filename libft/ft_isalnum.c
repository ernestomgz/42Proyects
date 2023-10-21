/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:14:31 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/01 09:29:58 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int letter);
int	ft_isdigit(int letter);

int	ft_isalnum(int letter)
{
	return (ft_isalpha(letter) || ft_isdigit(letter));
}
