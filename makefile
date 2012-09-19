BUILD = ./build
TEST = ./test
LIB = ./src

CMP = g++
WARNFLAGS = -Wall -Wextra -Werror

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: 
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: 
	cd $(TEST); $(MAKE)
