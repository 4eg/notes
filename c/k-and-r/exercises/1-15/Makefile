CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = f2c.c

f2c: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o f2c core
