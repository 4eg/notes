CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = wc.c

wc: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o wc core
