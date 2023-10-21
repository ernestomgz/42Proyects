/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:12:17 by ernesmar          #+#    #+#             */
/*   Updated: 2023/01/28 12:55:05 by ernesmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stddef.h>

//----------------- strings methods -----------------------

/**
  * @brew determine if a character is a letter
  * 
  * @return 1 if the input is a letter, 0 if not
  */
int		ft_isalpha(int ch);

/**
  * @brew determine if a character is a number
  * 
  * @return 1 if the input is a number, 0 if not
  */
int		ft_isdigit(int ch);

/**
  * @brew determine if a character is a number or a letter
  * 
  * @return 1 if the input is a number or letter, 0 if not
  */
int		ft_isalnum(int ch);

/**
  * @brew determine if a character is part of the ASCII table
  * 
  * @return 1 if the input exist in ASCII, 0 if not
  */
int		ft_isascii(int ch);

/**
  * @brew determine if a character is printable
  * 
  * @return 1 if the input can be printed, 0 if not
  */
int		ft_isprint(int ch);

/**
  * @brew computes the size of an string
  * 
  * @param str A null terminated string
  * 
  * @return lenght of str given as input
  */
int		ft_strlen(const char *str);

/**
  * @brew Copies n bytes from src to dst unitl '\0' character
  * 
  * @param dst Pointer of destiny. Should be allocated
  * @param src Pointer of origin.
  * @param dstsize Number of bytes to copy
  * 
  * @return Size of dst
  */
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);

/**
  * @brew Concatenate n bytes from src to dst unitl '\0' character
  * 
  * @param dst Pointer of destiny. Should be allocated
  * @param src Pointer of origin.
  * @param dstsize Number of bytes to copy
  * 
  * @return Size of dst + src
  */
size_t	ft_strlcat(char *dst, char *src, size_t dstsize);

/**
  * @brew If posible, turns c into upper
  * 
  * @return Upper case of c
  */
int		ft_toupper(int c);

/**
  * @brew If posible, turns c into upper
  * 
  * @return Upper case of c
  */
int		ft_tolower(int c);

char	*ft_strupper(char *strlower);

/**
  * @brew Searchs for the first occurrence of c in string s. Stops at '\0'
  * 
  * @return s when c is found, if not found returns null
  */
char	*ft_strchr(const char *s, int c);

/**
  * @brew Searchs for the last occurrence of c in string s
  * 
  * @return s when c is found, if not found returns null
  */
char	*ft_strrchr(const char *s, int c);

/**
  * @brew Compares the fistr n characters of s1 and s2. Stops comparing at '\0'
  * 
  * @return 1 if s1 in bigger than s2, 0 if they are equal and -1 else
  */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
  * @brew Searchs for the first occurrence of c in string s. Stops at '\0'
  * 
  * @return String s starting in c if is found, if not returns null
  */
void	*ft_memchr(const void *s, int c, size_t n);

/**
  * @brew Compares the fistr n characters of s1 and s2.
  * 
  * @return 1 if s1 in bigger than s2, 0 if they are equal and -1 else
  */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
  * @brew Locates the fistr ocurrence of needle in haystack until len.
  * Both null terminated.
  *
  * @return First ocurrence
  */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
  * @brew Copies s1 into a new memory space
  * @brew Same as memory copy but allocating space
  *
  * @return Pointer to the string copied
  */
char	*ft_strdup(const char *s1);

/**
  * @brew Computes the substring of s
  *
  * @return Pointer to substring
  */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
  * @brew Create a new string(allocating memory) concatenating s1 and s2.
  *
  * @return The new string created with s1 + s2
  */
char	*ft_strjoin(char const *s1, char const *s2);

/**
  * @brew Creates a new string deleting chars in set from s1 start and end
  *
  * @return New string deleting characters from set
  */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief sepate an string into a array of strings.
 *
 * @param s String to cut
 * @param c Separation between the two substrings
 * @return New String array
 */
char	**ft_split(char const *s, char c);

/**
 * @brief apply a function to every char
 *
 * @param s string to apply f
 * @param f function that is going to be applied
 * @return new string mapped
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Apply function f to all characters in s
 *
 * @param s string to be mapped
 * @param f function to use
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

//----------------- memory methods -----------------------

/**
  * @brew Writes len bytes of c starting from b
  * 
  * @param b Pointer of firts character to change
  * @param c Converted to unsigned char. character to asign
  * @param len Number of bytes to change
  * 
  * @return Pointer to b
  */
void	*ft_memset(void *b, int c, size_t len);

/**
  * @brew Writes len bytes of 0 starting from b
  * 
  * @param b Pointer of firts character to change
  * @param len Number of bytes to change
  * 
  * @return Pointer to b
  */
void	*ft_bzero(void *b, size_t len);

/**
  * @brew Copies n bytes from src to dst. They cannot overlap
  * 
  * @param dst Pointer of destiny. Should be allocated
  * @param src Pointer of origin.
  * @param len Number of bytes to copy
  * 
  * @return Pointer to dst
  */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
  * @brew Copies n bytes from src to dst. Overlapping is allowed
  * 
  * @param dst Pointer of destiny. Should be allocated
  * @param src Pointer of origin.
  * @param len Number of bytes to copy
  * 
  * @return Pointer to dst
  */
void	*ft_memmove(void *dst, const void *src, size_t n);

/**
  * @brew Allocates memeory and initializes it to zero
  *
  * @return Pointer to memory, if not posible returns NULL
  */
void	*ft_calloc(size_t count, size_t size);

//----------------- utils methods -----------------------

/**
 * @brief Turns integer into string
 *
 * @param n number to transform
 * @return String of the number '\0' ended
 */
char	*ft_itoa(int n);
char	*ft_itoa_pos(unsigned int n);
char	*ft_itoa_base(unsigned long long nb, int base);
char	*ft_itoa_base_pos(unsigned int nb, int base);

/**
  * @brew Transforms a numeric string to a integer
  *
  * @return String str into integer
  */
int		ft_atoi(const char *str);

/**
 * @brief powers of 10
 *
 * @param exponent 
 * @return result of 10^(exponent)
 */
int		pow10(int exponent);

/**
 * @brief calculate size of a number
 *
 * @param n 
 * @return how many digits a number has
 */
int		digits(long n);

/**
 * @brief calculate size of a number in the base you want
 *
 * @param n 
 * @param base Output base
 * @return how many digits a number has
 */
int		digits_base(unsigned long long n, int base);
int		digits_base_pos(unsigned int n, int base);

//----------------- files methods -----------------------

/**
 * @brief write in a file
 *
 * @param c character to write
 * @param fd file te be modified
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief write line in a fd
 *
 * @param c string to write
 * @param fd fd to write
 */
void	ft_putstr_fd(char *c, int fd);

/**
 * @brief write line in a fd, followed by a next line
 *
 * @param c string to write
 * @param fd fd to write
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief writes a number in a file
 *
 * @param c number to write
 * @param fd file to be modified
 */
void	ft_putnbr_fd(int c, int fd);

//--------------- list data-structure methods ---------------------

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Creates a new list
 *
 * @param content content of the first node
 * @return list allocated
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief add node at front
 *
 * @param lst pointer to the list itself
 * @param new_node node to add at first
 */
void	ft_lstadd_front(t_list **lst, t_list *new_node);

/**
 * @brief size of the list
 *
 * @param lst list
 * @return size
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief last node of the list
 *
 * @param lst list
 * @return Last Node
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief add new node at the end
 *
 * @param lst List
 * @param new_node  node to add at enc
 */
void	ft_lstadd_back(t_list **lst, t_list *new_node);

/**
 * @brief deletes one node using func del. Also frees memory
 *
 * @param lst Node of the list
 * @param del function that is going to apply to the node to delete
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Apply function del from lst to the end
 *
 * @param lst List to delete
 * @param del Function to apply to each node
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief Apply f over all nodes in lst(without doing anything)
 *
 * @param lst List to iterate
 * @param f Function apply to all nodes
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Apply f to all nodes and save the value in a new list.
 * 		If error frees new array;
 *
 * @param lst List to iterate
 * @param f Funcition to apply
 * @param del Function to delete new nodes in case of error
 * @return New List created with all nodes
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
