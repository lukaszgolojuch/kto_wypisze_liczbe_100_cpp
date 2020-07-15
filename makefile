#deklarowanie zmiennych

CC = g++
CFLAGS = -c -Wall

#koniec deklaracji zmiennych 

all: program

program: main.o move.o saving_progress.o number_generator.o level3_computer.o level2_computer.o level1_computer.o counting.o

	$(CC) -o program main.o move.o saving_progress.o number_generator.o level3_computer.o level2_computer.o level1_computer.o counting.o

main.o: main.cpp main.hpp number_generator.hpp move.hpp 
	$(CC) $(CFLAGS) main.cpp

move.o: move.cpp move.hpp counting.hpp level1_computer.hpp level2_computer.hpp level3_computer.hpp saving_progress.hpp
	$(CC) $(CFLAGS) move.cpp

saving_progress.o: saving_progress.cpp saving_progress.hpp
		   $(CC) $(CFLAGS) saving_progress.cpp

number_generator.o: number_generator.cpp number_generator.hpp saving_progress.hpp
		    $(CC) $(CFLAGS) number_generator.cpp 

level3_computer.o: level3_computer.cpp level3_computer.hpp counting.hpp
		    $(CC) $(CFLAGS) level3_computer.cpp

level2_computer.o: level2_computer.cpp level2_computer.hpp counting.hpp number_generator.hpp
		    $(CC) $(CFLAGS) level2_computer.cpp

level1_computer.o: level1_computer.cpp level1_computer.hpp counting.hpp number_generator.hpp
		    $(CC) $(CFLAGS) level1_computer.cpp

counting.o: counting.cpp counting.hpp
	    $(CC) $(CFLAGS) counting.cpp

clean:
	-rm -rf *o program