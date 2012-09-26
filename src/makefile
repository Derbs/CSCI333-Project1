BUILD = ../build
TEST = ../test
LIB = ../lib
COMP = g++
CPPFLAGS = -Wall -Wextra -Werror 

$(BUILD)/main: $(BUILD)/aqueue_test $(BUILD)/lqueue_test $(BUILD)/listqueue_test

$(BUILD)/aqueue_test: src/AQueue.o AQueue/Queue.cpp
	$(COMP) $(CPPFLAGS) -o $@ AQueue/Queue.cpp AQueue.o

$(BUILD)/lqueue_test: src/LQueue.o LQueue/Queue.cpp
	$(COMP) $(CPPFLAGS) -o $@ LQueue/Queue.cpp LQueue.o Node.o

$(BUILD)/listqueue_test: src/ListQueue.o ListQueue/Queue.cpp
	$(COMP) $(CPPFLAGS) -o $@ ListQueue/Queue.cpp ListQueue.o

./src/LQueue.o: src/Node.o LQueue/LQueue.h LQueue/LQueue.cpp
	$(COMP) $(CPPFLAGS) -c LQueue/LQueue.cpp

./src/AQueue.o: AQueue/AQueue.h AQueue/AQueue.cpp
	$(COMP) $(CPPFLAGS) -c AQueue/AQueue.cpp

./src/ListQueue.o: ListQueue/ListQueue.h ListQueue/ListQueue.cpp
	$(COMP) $(CPPFLAGS) -c ListQueue/ListQueue.cpp

./src/Node.o: LQueue/Node.h LQueue/Node.cpp
	$(COMP) $(CPPFLAGS) -c LQueue/Node.cpp

clean:
	rm -f *.o
	rm -f test
	rm -f */*.o
