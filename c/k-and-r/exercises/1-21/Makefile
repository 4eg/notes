CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = entab.c

entab: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o entab core
