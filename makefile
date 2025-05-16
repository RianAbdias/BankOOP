programa: main.o cliente.o contabancaria.o
	g++ main.o cliente.o contabancaria.o -o programa

main.o: main.cpp contabancaria.h cliente.h
	g++ -c main.cpp

cliente.o: cliente.cpp cliente.h
	g++ -c cliente.cpp

contabancaria.o: contabancaria.cpp contabancaria.h cliente.h
	g++ -c contabancaria.cpp
