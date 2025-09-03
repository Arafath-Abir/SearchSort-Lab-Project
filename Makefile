
CC=gcc
CFLAGS=-O2 -std=c11 -Wall -Wextra -Wshadow

INC= -Iinclude

SRC=\
src/linear_search.c \
src/binary_search.c \
src/bubble_sort.c \
src/quick_sort.c \
src/insertion_sort.c \
src/merge_sort.c \
src/selection_sort.c \
src/utils.c \
src/main.c

OBJ=$(SRC:.c=.o)

all: search_sort_demo

search_sort_demo: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ) search_sort_demo
