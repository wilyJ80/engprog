#ifndef FIBONACCI_H
#define FIBONACCI_H

#include "./recursive_fibonacci.h"

struct Fibonacci {
	struct RecursiveFibonacciSingleton recursiveFibonacci;
	void (*printFibonacci)(struct Fibonacci *self);
};

void printFibonacci(struct Fibonacci *self);
struct Fibonacci createFibonacci();

#endif // !MAIN_H
