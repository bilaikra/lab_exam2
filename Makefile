CC = gcc
CFLAGS = -Wall 

# Target for compiling the C program
division_algorithm: division_algorithm.c
	$(CC) $(CFLAGS) -o division_algorithm division_algorithm.c

# Target for cleaning build artifacts
clean:
	rm -f division_algorithm

# Target for running the compiled program
run: division_algorithm
	./division_algorithm

# Phony targets to ensure these names do not conflict with actual files
.PHONY: clean run
