BUILD = ../build
COMP = g++
CPPFLAGS = -Wall -Wextra -Werror 

test: AQueue.o AQueue/Queue.cpp
	$(COMP) $(CPPFLAGS) -o test AQueue/Queue.cpp AQueue.o

AQueue.o: clean AQueue/AQueue.h AQueue/AQueue.cpp 
	$(COMP) $(CPPFLAGS) -c AQueue/AQueue.cpp

clean:
	rm -f *.o
