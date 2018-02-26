CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = eofval.c

eofval: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o eofval core
