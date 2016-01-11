all: main1

main1: main1.o Node.o
	g++ -g main1.o Node.o -o main1 Vector.o -std=c++11 
	
main1.o : main1.cpp Node.h 
	g++ -c main1.cpp -o main1.o -std=c++11 

main: main.o Vector.o
	g++ main.o Vector.o -o main -std=c++11 
	
main.o : main.cpp Vector.h 
	g++ -c main.cpp -o main.o  -std=c++11 

Node.o : Node.cpp Node.h 
	g++ -c Node.cpp -o Node.o -std=c++11 

Vector.o : Vector.cpp Vector.h 
	g++ -c Vector.cpp -o Vector.o -std=c++11 

clean :
	rm -rf *.o

