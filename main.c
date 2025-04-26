#include "fibonacci.h"
#include <stdlib.h>

int main(void)
{
	struct Fibonacci fib = createFibonacci();

	fib.recursiveFibonacci.calculateResults(&fib.recursiveFibonacci);
	fib.iterativeFibonacci.calculateResults(&fib.iterativeFibonacci);

	fib.printFibonacci(&fib);

	return EXIT_SUCCESS;
}
