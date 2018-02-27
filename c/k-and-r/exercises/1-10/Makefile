CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = spcr.c

spcr: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o spcr core
