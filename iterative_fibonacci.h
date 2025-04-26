#ifndef ITERATIVE_FIBONACCI_H
#define ITERATIVE_FIBONACCI_H

#include "result.h"

struct IterativeFibonacci {
	const int (*iterativeFibonacci)(int n, int *steps);
	struct Result results[5];
	void (*initResults)(struct IterativeFibonacci *self);
	void (*calculateResults)(struct IterativeFibonacci *self);
};

struct IterativeFibonacci createIterativeFibonacci();
void calculateIfibResults(struct IterativeFibonacci *self);
void initIfibResults(struct IterativeFibonacci *self);
const int iterativeFibonacci(int nthNumber, int *steps);

#endif // !ITERATIVE_FIBONACCI_H
