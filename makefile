main_executable: main.o distance.o
	g++ -g -o main main.o distance.o
	chmod 755 main

distance.o: distance.cpp distance.h
	g++ -g -c distance.cpp 

main.o: main.cpp distance.h
	g++ -g -c main.cpp    

clean:
	rm -f *.o
