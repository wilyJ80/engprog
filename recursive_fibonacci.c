#include "recursive_fibonacci.h"

const int recursiveFibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

void initResults(struct RecursiveFibonacciSingleton *self) {
	int inputNumber = 2;
	for (int i = 0; i < 5; i++) {
		self->results[i].inputNumber = inputNumber;
		self->results[i].time = 0;
		inputNumber *= 2;
	}
}

void calculateResults(struct RecursiveFibonacciSingleton *self) {

}
