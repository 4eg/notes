CC = gcc
CDEBUG = -g
CFLAGS = $(CDEBUG)
SRCS_C = f_to_c.c

f_to_c: $(SRCS_C)
	$(CC) $(CFLAGS) -o $@ $(SRCS_C)

.PHONY: clean
clean:
	rm -f *.o f_to_c core
