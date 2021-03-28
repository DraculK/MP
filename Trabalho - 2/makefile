
#output: testa_romano.o romano.o
#	g++ testa_romano.o romano.o -o output

#testa_romano.o: testa_romano.cpp
#	g++ -c testa_romano.cpp

#romano.o: romano.cpp romano.hpp
#	g++ -c romano.cpp

#clean:
#	rm *.o output

CC = g++
CFLAGS = -g -w -Wall

main: testa_romano.o romano.o 
	$(CC) $(CFLAGS) -o main testa_romano.o romano.o 

romano.o: romano.cpp romano.hpp
	$(CC) $(CFLAGS) -c romano.cpp

verify:
	valgrind --leak-check=full ./main
	cppcheck --enable=warning

clean:
	rm -f core *.o main