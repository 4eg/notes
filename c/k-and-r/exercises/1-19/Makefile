CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = rev.c

rev: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o rev core
