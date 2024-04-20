COMPILER = gcc
BIN := ./bin
SRC := ./src

all:	$(BIN)/fifo_queue $(BIN)/simple_fibonacci_generator $(BIN)/recursive_fibonacci_generator  $(BIN)/factorial
	@echo "" 
	@echo "Compiling all..."
	
$(BIN)/fifo_queue: $(SRC)/fifo_queue.c
	@echo "" 
	@echo "Compiling FIFO queue source files..."
	$(COMPILER) -g $< -o $@

$(BIN)/simple_fibonacci_generator: $(SRC)/simple_fibonacci_generator.c
	@echo "" 
	@echo "Compiling simple_fibonacci_generator source file..."
	$(COMPILER) -g $< -o $@

$(BIN)/recursive_fibonacci_generator: $(SRC)/recursive_fibonacci_generator.c
	@echo ""
	@echo "Compiling recursive_fibonacci_generator source file..."
	$(COMPILER) -g $< -o $@

$(BIN)/factorial: $(SRC)/factorial.c
	@echo "" 
	@echo "Compiling factorial source file..."
	$(COMPILER) -g $< -o $@

clean:
	rm -f factorial
	rm -f fifo_queue
	rm -f recursive_fibonacci_generator
	rm -f simple_fibonacci_generator
	rm -rf bin/*

