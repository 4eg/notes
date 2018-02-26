CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = i2bool.c

i2bool: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o i2bool core
