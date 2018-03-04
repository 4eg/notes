CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = ll.c

ll: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o ll core
