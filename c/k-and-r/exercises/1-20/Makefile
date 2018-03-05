CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = detab.c

detab: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o detab core
