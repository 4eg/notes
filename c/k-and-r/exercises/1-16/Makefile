CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = longl.c

longl: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o longl core
