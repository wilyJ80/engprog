#ifndef RECURSIVE_FIBONACCI_H
#define RECURSIVE_FIBONACCI_H

#include "result.h"

struct RecursiveFibonacci {
	const int (*recursiveFibonacci)(int n);
	struct Result results[5];
	void (*initResults)(struct RecursiveFibonacci *self);
};

void initResults(struct RecursiveFibonacci *self);
const int recursiveFibonacci(int n);

#endif // !RECURSIVE_FIBONACCI_H
