source:
	http://cpplove.blogspot.nl/2012/07/a-generic-loop-unroller-based-on.html
	https://gist.github.com/motonacciu/3190205

build:
	g++ -std=c++11 -O3 main.cpp -o main.o
	g++ -std=c++11 -O3 main_unrolled.cpp -o main_unrolled.o

	THE -O3 is important, if not used the unrolling will be MUCH SLOWER (4x slower) because the lanbda and template expressions will not be used efficiently