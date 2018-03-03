CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = rcom.c

rcom: $(SRCS_C)
	$(CC) $(CDEBUG) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o rcom core
