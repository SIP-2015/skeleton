
all: squares functions pointers testing sorting

squares: projects/squares/Robot.cpp 
	g++ -Wall -std=c++11 projects/squares/Robot.cpp -o projects/squares/robot -c

functions: tasks/functions/functions.cpp tasks/functions/functions_main.cpp
	g++ -Wall -std=c++11 tasks/functions/functions.cpp tasks/functions/functions_main.cpp -o tasks/functions/functions

pointers: tasks/pointers/pointers.cpp tasks/pointers/pointers.h
	g++ -Wall -std=c++11 tasks/pointers/pointers.cpp -c -o tasks/pointers/pointers

testing: tasks/makefiles_and_testing/testing.cpp 
	g++ -Wall -std=c++11 tasks/makefiles_and_testing/testing.cpp -c -o tasks/makefiles_and_testing/testing

sorting: tasks/sorting/sorting.cpp tasks/sorting/sorting.h tasks/sorting/sorting_main.cpp
	g++ -Wall tasks/sorting/sorting.cpp tasks/sorting/sorting_main.cpp -o tasks/sorting/sorting