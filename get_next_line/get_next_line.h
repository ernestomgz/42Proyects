/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:01:35 by ernesmar          #+#    #+#             */
/*   Updated: 2023/06/10 16:12:17 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>

//defined in get_next_line.c
//static int get_next_line(int fd, char **line);
char	*get_next_line(int fd);

void	*ft_calloc(size_t count, size_t size);
void	*ft_mod_realloc(void *ptr, size_t initial_size, size_t final_size);
int		push_text_end(char **accumulator, char **to_add, int added_size);
int		read_file(int fd, char **readed_text);
int		ft_strlen(const char *str);
char	*ft_strcut_after(char *str_ptr, char cut_here);
char	*ft_strcut_before(char *str_ptr, char cut_here);
void	*ft_mod_realloc(void *inicial,size_t initial_size,size_t final_size);

#endif
