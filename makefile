
all: example squares

example: example/example.cpp example/example_main.cpp
	g++ -Wall -std=c++11 example/example.cpp example/example_main.cpp -o example/example

squares: projects/squares/Robot.cpp 
	g++ -Wall -std=c++11 projects/squares/Robot.cpp -o projects/squares/robot -c