CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = hello.c

hello:
	$(CC) $(CFLAGS) -o $@ $(SRCS_C)

.PHONY: clean
clean:
	rm -f *.o hello core
