CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = c_to_f.c

c_to_f: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $(SRCS_C)

.PHONY: clean
clean:
	rm -f *.o c_to_f core
