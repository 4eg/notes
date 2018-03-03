CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = rts.c

rts: $(SRCS_C)
	$(CC) $(CDEBUG) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o rts core
