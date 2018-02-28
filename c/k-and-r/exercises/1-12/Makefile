CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = wpl.c

wpl: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o wpl core
