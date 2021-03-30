CC= g++
CCFlags= -Wall -c

main: main.o
	$(CC) $(CCFlags) $^ -o $@

clean:
	$(RM) *.o main
