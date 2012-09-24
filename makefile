BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CMP = g++
WARNFLAGS = -Wall -Wextra -Werror

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(SRC)/AQueue/AQueue.cpp $(SRC)/AQueue/AQueue.o 
	cd $(SRC); $(MAKE) 

$(TEST)/queue_test: $(TEST)/Queue.cpp $(SRC)/AQueue.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
