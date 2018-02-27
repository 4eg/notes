CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = sb.c

sb: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o sb core
