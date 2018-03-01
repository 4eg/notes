CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = histlen.c

histlen: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o histlen core
