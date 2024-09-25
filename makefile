CC=gcc
CFLAGS=-std=c99 -pedantic -pedantic-errors -Werror -Wall -Wextra

all: sizeof args tree

sizeof: sizeof.c
args: args.c
tree: tree.c

clean:
	rm -f sizeof
	rm -f args
	rm -f tree
