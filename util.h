#ifndef MAIN_H
#define MAIN_H

struct Result {
	int inputSize;
	int steps;
};

struct RecursiveFibonacci {
	const int (*recursiveFibonacci)(int n);
	// from 100 to 1_000_000
	struct Result results[5];
	void (*initResults)(struct RecursiveFibonacci *self);
};

struct Fibonacci {
	struct RecursiveFibonacci recursiveFibonacci;
	void (*printFibonacci)();
};

void initResults(struct RecursiveFibonacci *self);
const int recursiveFibonacci(int n);
void printFibonacci(struct Fibonacci *self);
struct Fibonacci createFibonacci();

#endif // !MAIN_H
