swap: 25_swap.o 25_swaputils.o
	g++ 25_swap.o 25_swaputils.o -o swap

25_swap.o: 25_swap.cpp
	g++ -c 25_swap.cpp

25_swaputils.o: 25_swaputils.cpp
	g++ -c 25_swaputils.cpp

clean:
	rm *.o math