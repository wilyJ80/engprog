#include "recursive_fibonacci.h"

const int recursiveFibonacci(int nthNumber, int *steps) {
	(*steps)++;
	if (nthNumber == 0) {
		return 0;

		(*steps)++;
	} else if (nthNumber == 1) {
		return 1;
	}
	(*steps)++;
	return recursiveFibonacci(nthNumber - 1, steps) + recursiveFibonacci(nthNumber - 2, steps);
}

void initRfibResults(struct RecursiveFibonacci *self) {
	int inputNumber = 2;
	for (int i = 0; i < 5; i++) {
		self->results[i].inputNumber = inputNumber;
		self->results[i].steps = 0;
		inputNumber += 2; 
	}
}

void calculateRfibResults(struct RecursiveFibonacci *self) {
	for (int i = 0; i < 5; i++) {
		const int result = recursiveFibonacci(self->results[i].inputNumber, &self->results[i].steps);
	}
}

struct RecursiveFibonacci createRecursiveFibonacci() {
	struct RecursiveFibonacci rfib = {
		.calculateResults = calculateRfibResults,
		.recursiveFibonacci = recursiveFibonacci,
		.initResults = initRfibResults
	};
	return rfib;
}
