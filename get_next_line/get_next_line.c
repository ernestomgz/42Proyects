/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:49:01 by ernesmar          #+#    #+#             */
/*   Updated: 2023/06/10 16:12:32 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// temporal. Must be deleted.
#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

//get_next_line allocates out and static
//return out
char	*get_next_line(int fd)
{
	static char	*remain = NULL;
	char		*out;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);

	read_file(fd, &remain);
	if(remain == NULL)
		return (NULL);
	out = ft_strcut_before(remain, '\n');
	remain = ft_strcut_after(remain, '\n');
	return(out);
}

// read_file must allocate buffer and store inside readline.
// If error return 0 and free buffer
int	read_file(int fd, char **buffer)
{
	int count;
	char *temp_buffer;

	count = 1;
	temp_buffer = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if(temp_buffer == NULL)
		return (-1);
	//count = read(fd, temp_buffer, BUFFER_SIZE); //temp
	//push_text_end(buffer, &temp_buffer); //temp
	while(count > 0 )
	{
		count = read(fd, temp_buffer, BUFFER_SIZE);
		if(count == 0)
		{
			free(temp_buffer);
			return(0);
		}
		if(count == -1)
		{
			free(*buffer);
			free(temp_buffer);
			*buffer = NULL;
			return (-1);
		}
		push_text_end(buffer, &temp_buffer, count);
		if(buffer == NULL)
		{
			return (-1);
		}
		if(strchr(*buffer,'\n') != NULL)
			break;
	}	
	free(temp_buffer);
	return (0);
}

