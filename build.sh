#!/bin/bash

gcc -g ./main.c ./fibonacci.c ./recursive_fibonacci.c ./iterative_fibonacci.c -o main && ./main
