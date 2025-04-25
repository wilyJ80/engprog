#include "recursive_fibonacci.h"

const int recursiveFibonacci(int nthNumber) {
	if (nthNumber == 0) {
		return 0;
	} else if (nthNumber == 1) {
		return 1;
	}
	return recursiveFibonacci(nthNumber - 1) + recursiveFibonacci(nthNumber - 2);
}

void initResults(struct RecursiveFibonacci *self) {
	int inputNumber = 2;
	for (int i = 0; i < 5; i++) {
		self->results[i].inputNumber = inputNumber;
		self->results[i].time = 0;
		inputNumber *= 2;
	}
}

void calculateResults(struct RecursiveFibonacci *self) {
	for (int i = 0; i < 5; i++) {
		const int result = recursiveFibonacci(self->results[i].inputNumber);
		self->results[i].time = 9;
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
