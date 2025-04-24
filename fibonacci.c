#include "./fibonacci.h"
#include <stdio.h>

void printFibonacci(struct Fibonacci *self) {
	printf("+---------------------+\n");
	printf("| Recursive Fibonacci |\n");
	printf("+---------------------+\n");
	printf("| Input size | Steps  |\n");
	printf("+---------------------+\n");
	for (int i = 0; i < 5; i++) {
		struct Result result = self->recursiveFibonacci.results[i];
		printf("| %d | %d |\n", result.inputSize, result.steps);
	}
	printf("+---------------------+\n");
}

struct Fibonacci createFibonacci() {
	static struct RecursiveFibonacciSingleton rfib = {
		.recursiveFibonacci = recursiveFibonacci,
		.initResults = initResults
	};

	rfib.initResults(&rfib);

	struct Fibonacci fib = {
		.recursiveFibonacci = rfib,
		.printFibonacci = printFibonacci
	};
	return fib;
}
