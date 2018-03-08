CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = fold.c

fold: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o fold core
