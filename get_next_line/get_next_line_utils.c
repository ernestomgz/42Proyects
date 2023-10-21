/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:05:26 by ernesmar          #+#    #+#             */
/*   Updated: 2023/06/10 16:11:42 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>

//for read func
#include <unistd.h>

#ifndef BUFFER_SIZE
#endif

void	*ft_calloc(size_t count, size_t size)
{
	void			*general;
	size_t			i;
	unsigned char	*str;

	general = malloc(count * size);
	if (general && size * count > 0)
	{
		i = 0;
		str = (unsigned char *) general;
		while (i < size * count)
		{
			*(str + i) = (unsigned char) 0;
			i++;
		}
	}
	return (general);
}

//not the best implementation
//not extension of memory, just copy to a bigger place
void	*ft_mod_realloc(void *inicial,
		size_t initial_size,
		size_t final_size)
{
	void	*final;

	final = ft_calloc(sizeof(char), final_size);
	memcpy(final, inicial, initial_size);
	free(inicial);
	return (final);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*(str++) != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcut_before(char *str_ptr, char cut_here)
{
	char	*out;
	int		i;

	if(!str_ptr|| *str_ptr == '\0')
		return (NULL);
	i = 0;
	while(*(str_ptr + i) != '\0' &&  *(str_ptr + i) != cut_here)
		i++;
	out = ft_calloc(sizeof(char), (i + 2));
	if(!out)
		return (NULL);
	i = 0;
	while(*(str_ptr + i) != '\0' &&  *(str_ptr + i) != cut_here)
	{
		*(out + i) = *(str_ptr + i);
		i++;
	}
	if(*(str_ptr + i) == cut_here)
		*(out + i) = cut_here;
	return (out);
}

// must return before "cut here" + '0' 
// and store after /n
char	*ft_strcut_after(char *str_ptr, char cut_here)
{
	char	*out;
	int		j;
	int		i;

	j = 0;
	i = 0;
	while(*(str_ptr + j) != '\0'  &&  *(str_ptr + j) != cut_here)
		j++;
	if(*(str_ptr + j) == '\0')
	{
		free (str_ptr);
		str_ptr = NULL;
		return (NULL);
	}
	out = ft_calloc(sizeof(char), ft_strlen(str_ptr) - j + 1);
	if(out == NULL)
		return (NULL);
	j++;
	while(*(str_ptr + j) != '\0')
		*(out + (i++)) = *(str_ptr + (j++));
	free(str_ptr);
	return (out);
}

int	push_text_end(char **accumulator, char **to_add, int added_size)
{
	size_t	original_size;

	original_size = 0;
	if(*accumulator != NULL)
		original_size = sizeof(char) * strlen(*accumulator);
	*accumulator = ft_mod_realloc(*accumulator,
			original_size,
			original_size + added_size + 1);
	if(*accumulator == NULL)
		return (-1);
	strlcat(*accumulator, *to_add, original_size + added_size + 1);
	*(*accumulator + original_size + added_size) = 0;
	//free(*to_add);
	//*to_add = NULL;
	return (0);
}
