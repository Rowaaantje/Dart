output: main.o
	g++ main.o -o output
	
main.o : main.cpp ## only recompiles this when changes are made!
	g++ -c main.cpp

clean:
	rm *.o output

run:
	./output