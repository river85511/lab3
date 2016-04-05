main: main.o Clock.o
	g++ -o main main.o Clock.o

main.o: main.cpp Clock.h
	g++ -c main.cpp

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

clean:
	rm main *.o
