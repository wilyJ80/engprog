#ifndef MAIN_H
#define MAIN_H

#include "./recursive_fibonacci.h"

struct Fibonacci {
	struct RecursiveFibonacci recursiveFibonacci;
	void (*printFibonacci)();
};

void printFibonacci(struct Fibonacci *self);
struct Fibonacci createFibonacci();

#endif // !MAIN_H
