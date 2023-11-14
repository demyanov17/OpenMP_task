all: OpenMP_task

OpenMP_task: main.o array_creator.o
	g++ main.o array_creator.o -o OpenMP_task -fopenmp

main.o: main.cpp
	g++ -c main.cpp -fopenmp

array_creator.o: array_creator.cpp
	g++ -c array_creator.cpp -fopenmp

clean:
	rm -rf *.o OpenMP_task
