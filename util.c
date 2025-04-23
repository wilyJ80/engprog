#include "./util.h"
#include <stdio.h>

const int recursiveFibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

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

void initResults(struct RecursiveFibonacci *self) {
	struct Result result[5];
	int inputSize = 100;
	for (int i = 0; i < 5; i++) {
		self->results[i].inputSize = inputSize;
		self->results[i].steps = 0;
		inputSize *= 10;
	}
}

struct Fibonacci createFibonacci() {
	static struct RecursiveFibonacci rfib = {
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
