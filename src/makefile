BUILD = ../build
COMP = g++
CPPFLAGS = -Wall -Wextra -Werror 

aqueuetest: AQueue.o AQueue/Queue.cpp
	$(COMP) $(CPPFLAGS) -o test AQueue/Queue.cpp AQueue.o

AQueue.o: clean AQueue/AQueue.h AQueue/AQueue.cpp 
	make clean
	$(COMP) $(CPPFLAGS) -c AQueue/AQueue.cpp

nodetest: Node.o LQueue/node_test.cpp
	$(COMP) $(CPPFLAGS) -o test LQueue/node_test.cpp Node.o

Node.o: clean LQueue/Node.h LQueue/Node.cpp
	make clean
	$(COMP) $(CPPFLAGS) -c LQueue/Node.cpp

clean:
	rm -f *.o
