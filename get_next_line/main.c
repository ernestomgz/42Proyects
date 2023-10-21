/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:41:43 by ernesmar          #+#    #+#             */
/*   Updated: 2023/06/10 16:23:31 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// for open
#include <fcntl.h>

//for close
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>

#include "get_next_line.h"

#define FILE1 "test/limits.txt"
//# define BUFFER_SIZE 10
//

void ft_no(void) {
     system("leaks a.out");
}


int	main(int argc, char *argv[])
{
	int		fd;
	char	*text;
	int		line;

	if (argv == NULL || argc == 2)
		printf("error");
	fd = open(FILE1, O_RDONLY);
	line = 1;
	while ((text = get_next_line(fd)) != NULL)
	{
		printf("linea %d (%s)\n", line++, text);
		free(text);
	}
	close(fd);
	atexit(ft_no);
	return (0);


}
