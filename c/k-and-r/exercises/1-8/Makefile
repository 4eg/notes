CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = spcc.c

spcc: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o spcc core
