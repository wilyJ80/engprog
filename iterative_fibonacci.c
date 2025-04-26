#include "iterative_fibonacci.h"

const int iterativeFibonacci(int nthNumber, int *steps) {
    (*steps)++;
    if (nthNumber == 0) {
        return 0;
    }

    (*steps)++;
    if (nthNumber == 1) {
        return 1;
    }

    (*steps) += 2;
    int a = 0, b = 1, c;

    (*steps)++;
    for (int i = 2; i <= nthNumber; i++) {

        (*steps)++;
        c = a + b;
        (*steps) += 2;
        a = b;
        b = c;
    }
    (*steps)++;

    return b;
}

void initIfibResults(struct IterativeFibonacci *self) {
	int inputNumber = 2;
	for (int i = 0; i < 5; i++) {
		self->results[i].inputNumber = inputNumber;
		self->results[i].steps = 0;
		inputNumber += 2; 
	}
}

void calculateIfibResults(struct IterativeFibonacci *self) {
	for (int i = 0; i < 5; i++) {
		const int result = iterativeFibonacci(self->results[i].inputNumber, &self->results[i].steps);
	}
}

struct IterativeFibonacci createIterativeFibonacci() {
	struct IterativeFibonacci ifib = {
		.calculateResults = calculateIfibResults,
		.iterativeFibonacci = iterativeFibonacci,
		.initResults = initIfibResults
	};
	return ifib;
}
