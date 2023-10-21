CC=gcc

CFLAGS= -Wall -Wextra -Werror -D BUFFER_SIZE=10

CFILES=main.c get_next_line.c get_next_line_utils.c 
HFILES=./get_next_line.h

all:
	$(CC) $(CFLAGS) $(CFILES) -g

clean:$(fclean)
fclean:
	rm -rf *.a *.out

re:FCLEAN ALL

