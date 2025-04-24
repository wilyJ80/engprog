#include "recursive_fibonacci.h"

const int recursiveFibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

void initResults(struct RecursiveFibonacci *self) {
	int inputSize = 100;
	for (int i = 0; i < 5; i++) {
		self->results[i].inputSize = inputSize;
		self->results[i].steps = 0;
		inputSize *= 10;
	}
}
