
all: example squares functions

squares: projects/squares/Robot.cpp 
	g++ -Wall -std=c++11 projects/squares/Robot.cpp -o projects/squares/robot -c

functions: tasks/functions/functions.cpp tasks/functions/functions_main.cpp
	g++ -Wall -std=c++11 tasks/functions/functions.cpp tasks/functions/functions_main.cpp -o tasks/functions/functions