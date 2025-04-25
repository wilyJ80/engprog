#include "./fibonacci.h"
#include "recursive_fibonacci.h"
#include <stdio.h>

void printFibonacci(struct Fibonacci *self) {
	printf("+---------------------+\n");
	printf("| Recursive Fibonacci |\n");
	printf("+---------------------+\n");
	printf("| Input No. | Time    |\n");
	printf("+---------------------+\n");
	for (int i = 0; i < 5; i++) {
		struct Result result = self->recursiveFibonacci.results[i];
		printf("| %d | %d |\n", result.inputNumber, result.time);
	}
	printf("+---------------------+\n");
}

struct Fibonacci createFibonacci() {
	static struct RecursiveFibonacciSingleton rfib = {
		.recursiveFibonacci = recursiveFibonacci,
		.initResults = initResults,
		.calculateResults = calculateResults
	};

	rfib.initResults(&rfib);

	struct Fibonacci fib = {
		.recursiveFibonacci = rfib,
		.printFibonacci = printFibonacci
	};
	return fib;
}
