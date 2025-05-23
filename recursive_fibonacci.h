#ifndef RECURSIVE_FIBONACCI_H
#define RECURSIVE_FIBONACCI_H

#include "result.h"

struct RecursiveFibonacci {
	const int (*recursiveFibonacci)(int n, int *steps);
	struct Result results[5];
	void (*initResults)(struct RecursiveFibonacci *self);
	void (*calculateResults)(struct RecursiveFibonacci *self);
};

struct RecursiveFibonacci createRecursiveFibonacci();
void calculateRfibResults(struct RecursiveFibonacci *self);
void initRfibResults(struct RecursiveFibonacci *self);
const int recursiveFibonacci(int nthNumber, int *steps);

#endif // !RECURSIVE_FIBONACCI_H
