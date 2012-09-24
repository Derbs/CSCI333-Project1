BUILD = ../build
TEST = ../test
LIB = ../lib
COMP = g++
CPPFLAGS = -Wall -Wextra -Werror 

$(BUILD)/main: $(BUILD)/aqueue_test $(BUILD)/lqueue_test

$(BUILD)/aqueue_test: $(BUILD)/AQueue.o AQueue/Queue.cpp
	$(COMP) $(CPPFLAGS) -o $@ AQueue/Queue.cpp AQueue.o

$(BUILD)/lqueue_test: $(BUILD)/LQueue.o LQueue/Queue.cpp
	$(COMP) $(CPPFLAGS) -o $@ LQueue/Queue.cpp LQueue.o

$(BUILD)/AQueue.o: AQueue/AQueue.h AQueue/AQueue.cpp
	$(COMP) $(CPPFLAGS) -c AQueue/AQueue.cpp

$(BUILD)/LQueue.o: $(BUILD)/Node.o LQueue/LQueue.h LQueue/LQueue.cpp
	$(COMP) $(CPPFLAGS) -c LQueue/LQueue.cpp Node.o

$(BUILD)/Node.o: LQueue/Node.h LQueue/Node.cpp
	$(COMP) $(CPPFLAGS) -c LQueue/Node.cpp

clean:
	rm -f *.o
	rm -f test
