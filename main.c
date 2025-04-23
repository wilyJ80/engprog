#include "fibonacci.h"
#include <stdlib.h>

int main(void)
{
		struct Fibonacci fib = createFibonacci();
		fib.printFibonacci();
		return EXIT_SUCCESS;
}
