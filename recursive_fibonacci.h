#ifndef RECURSIVE_FIBONACCI_H
#define RECURSIVE_FIBONACCI_H

#include "result.h"

struct RecursiveFibonacciSingleton {
	const int (*recursiveFibonacci)(int n);
	struct Result results[5];
	void (*initResults)(struct RecursiveFibonacciSingleton *self);
};

void initResults(struct RecursiveFibonacciSingleton *self);
const int recursiveFibonacci(int n);

#endif // !RECURSIVE_FIBONACCI_H
