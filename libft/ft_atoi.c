/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:48:22 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/04 12:17:12 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_sign(char *str)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (!is_number(str[i])
		&& !(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
	{
		if (str[i] != sign)
			sign *= -1;
		i++;
	}
	return (sign);
}

int	check_number(const char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (str[i] != 0 && is_number(str[i]))
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int	sign;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (!is_number(*str) && *str != '-' && *str != '+')
		return (0);
	sign = 1;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
	{
		sign *= 1;
		str++;
	}
	return (sign * check_number(str));
}
