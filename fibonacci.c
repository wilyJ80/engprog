#include "./fibonacci.h"
#include "iterative_fibonacci.h"
#include "recursive_fibonacci.h"
#include <stdio.h>

void printFibonacci(struct Fibonacci *self) {
	printf("+---------------------+\n");
	printf("| Recursive Fibonacci |\n");
	printf("+---------------------+\n");
	printf("| Input No. | Steps   |\n");
	printf("+---------------------+\n");
	for (int i = 0; i < 5; i++) {
		struct Result result = self->recursiveFibonacci.results[i];
		printf("| %d | %d |\n", result.inputNumber, result.steps);
	}
	printf("+---------------------+\n");


	printf("+---------------------+\n");
	printf("| Iterative Fibonacci |\n");
	printf("+---------------------+\n");
	printf("| Input No. | Steps   |\n");
	printf("+---------------------+\n");
	for (int i = 0; i < 5; i++) {
		struct Result result = self->iterativeFibonacci.results[i];
		printf("| %d | %d |\n", result.inputNumber, result.steps);
	}
	printf("+---------------------+\n");
}

struct Fibonacci createFibonacci() {
	struct RecursiveFibonacci rfib = createRecursiveFibonacci();
	rfib.initResults(&rfib);

	struct IterativeFibonacci ifib = createIterativeFibonacci();
	ifib.initResults(&ifib);

	struct Fibonacci fib = {
		.recursiveFibonacci = rfib,
		.iterativeFibonacci = ifib,
		.printFibonacci = printFibonacci
	};

	return fib;
}
