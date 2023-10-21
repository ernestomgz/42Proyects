/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:31:37 by ernesmar          #+#    #+#             */
/*   Updated: 2022/12/16 17:31:39 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_count_inside_letter(char const *s, char c, int *pos)
{
	int	result;

	result = 0;
	*pos = 0;
	s = (char *) s;
	while (*(s + *pos) == c && c != 0)
		(*pos)++;
	s += *pos;
	while (*s != 0 && s != NULL && c != 0)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			if (*s == 0)
				return (result);
			s--;
			if (*s != 0)
			result++;
		}
		else if (*s == 0)
			result++;
		s++;
	}
	return (result);
}

int	ft_next_word_end(char const *s, char c)
{
	int	next;

	next = 0;
	while (*(s + next) != c && *(s + next) != 0)
	{
		next++;
	}
	return (next);
}

char	**free_before_alloc(char **array)
{
	int	pos;

	pos = 0;
	while (*(array + pos) != NULL)
	{
		free(*(array + pos));
		pos++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		num_words;
	int		word_count;
	int		pos;

	num_words = ft_count_inside_letter(s, c, &pos) + 1;
	word_count = 0;
	if (num_words == 1 && *(s + pos) == 0)
		num_words = 0;
	words = (char **) malloc((num_words + 1) * sizeof(char *));
	if (words == NULL || s == NULL)
		return (NULL);
	while (word_count < num_words)
	{
		*(words + word_count) = ft_substr(s, pos, ft_next_word_end(s + pos, c));
		if (*(words + word_count) == NULL)
			return (free_before_alloc(words));
		pos += ft_next_word_end(s + pos, c) + 1;
		while (pos < ft_strlen(s) && *(s + pos) == c)
			pos++;
		word_count++;
	}
	*(words + word_count) = NULL;
	return (words);
}
