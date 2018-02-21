CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = escape_sequences.c

escape_sequences: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $(SRCS_C)

.PHONY: clean
clean:
	rm -f *.o escape_sequences core
