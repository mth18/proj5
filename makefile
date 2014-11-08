CC = gcc
CFLAGS = -Wall
DEPS = matrix.h
OBJ = matrix.o matfunctions.o experiments.o

%.o: %.c $(DEPS)
		$(CC) $(CFLAGS) -c -o $@ $<

mat: $(OBJ)
		gcc $(CFLAGS) -o $@ $^

run: 
	./mat

clean: 
	rm $(OBJ)