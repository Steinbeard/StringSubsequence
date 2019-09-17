strings_subsq: main.o subsq.o
	g++ -std=c++11 -Wall main.o subsq.o -o strings_subsq

main.o: main.cpp
	g++ -std=c++11 -Wall -c main.cpp

subsq.o: subsq.cpp subsq.h
	g++ -std=c++11 -Wall -c subsq.cpp

.PHONY: clean

clean:
	$(RM) strings_subsq main.o subsq.o