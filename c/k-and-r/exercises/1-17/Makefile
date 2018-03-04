CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = p80.c

p80: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o p80 core
