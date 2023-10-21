# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ernesmar <ernesmar@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 09:43:25 by ernesmar          #+#    #+#              #
#    Updated: 2023/01/27 09:43:29 by ernesmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEBUGFLAGS = -g

OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o \
	   ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o \
	   ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o \
	   ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o \
	   ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o \
	   ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o \
	   ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o \
	   ft_itoa_base.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o \
	   ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o 

BONUSOBJS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o \
			ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
			ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o

CFILES = $(OBJS:.o=.c)
BONUSCFILES = $(BONUSOBJS:.o=.c)  

NAME = libft.a


all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@echo "Compiling library $@...."
	@ar rcs $(NAME) $(OBJS) 
	@echo "Sucessfully Compiled"

debug: CFLAGS += $(DEBUGFLAGS)
debug: all

bonus: $(BONUSOBJS)
	@echo "Compiling bonus..."
	@ar rcs $(NAME) $(BONUSOBJS)

test: $(NAME)
	@echo "Compiling test"
	@$(CC) $(CFLAGS) -o $@.out main.c $(NAME)
	@./test.out

fclean:
	@echo "Deleting compilated..."
	@rm -rf *.o *.a a.out
	@echo "Sucessfully deleted"

clean:
	@echo "Deleting objects..."
	@rm -rf *.o a.out
	@echo "Sucessfully deleted"

re: fclean all

.PHONY: all debug bonus test fclean clean re
