CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = histc.c

histc: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o histc core
