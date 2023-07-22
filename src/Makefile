clean:
	rm -rf *.a *.o *.out


valgrind: test/test_main.out
	mkdir -p $(VALGRIND_REPORT_DIRECTORY_FOR_DOCKER_CONTAINER)
	-valgrind --leak-check=full --show-reachable=no --track-origins=yes --log-file=$(VALGRIND_REPORT_DIRECTORY_FOR_DOCKER_CONTAINER)/valgrind_report.txt -s ./test/test_main.out > $(VALGRIND_REPORT_DIRECTORY_FOR_DOCKER_CONTAINER)/test_report.txt
	cat $(VALGRIND_REPORT_DIRECTORY_FOR_DOCKER_CONTAINER)/test_report.txt
	cat $(VALGRIND_REPORT_DIRECTORY_FOR_DOCKER_CONTAINER)/valgrind_report.txt

CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++17

all: Azaza

map.out: map.o
	$(CC) map.o -o map.out

map.o: map.cpp    
	$(CC) -c map.cpp $(CFLAGS) -o map.o

Azaza: map.out
	./map.out


