BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror

#As an example:
#stack: Stack.cpp $(SRC)/Stack.o $(GTEST_MAINA)
#	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o stack_test $^

queue_test: Queue.cpp $(SRC)/AQueue.o $(SRC)/LQueue.o $(SRC)/Node.o $(SRC)/ListQueue.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o $@ $^

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f *_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean


