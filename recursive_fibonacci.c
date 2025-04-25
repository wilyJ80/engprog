#include "recursive_fibonacci.h"

const int recursiveFibonacci(int nthNumber, int *steps) {
	if (nthNumber == 0) {
		return 0;
	} else if (nthNumber == 1) {
		return 1;
	}
	return recursiveFibonacci(nthNumber - 1, steps) + recursiveFibonacci(nthNumber - 2, steps);
}

void initResults(struct RecursiveFibonacci *self) {
	int inputNumber = 2;
	for (int i = 0; i < 5; i++) {
		self->results[i].inputNumber = inputNumber;
		self->results[i].steps = 0;
		inputNumber *= 2; 
	}
}

void calculateResults(struct RecursiveFibonacci *self) {
	for (int i = 0; i < 5; i++) {
		const int result = recursiveFibonacci(self->results[i].inputNumber, &self->results[i].steps);
		self->results[i].steps = 1;
	}
}

struct RecursiveFibonacci createRecursiveFibonacci() {
	struct RecursiveFibonacci rfib = {
		.calculateResults = calculateResults,
		.recursiveFibonacci = recursiveFibonacci,
		.initResults = initResults
	};
	return rfib;
}
