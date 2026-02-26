#include <stdio.h>
#define N 5
long factorial_helper(int num, long accumulator) {
    if (num == 0) {
        return accumulator;
    }
    return factorial_helper(num - 1, num * accumulator);
}
long factorial(int num) {
    return factorial_helper(num, 1);
}

int main() {
    int i;
    long result;

    printf("Demonstrating tail recursion for factorial using N = %d\n", N);
    result = factorial(N);

    printf("Factorial of %d is: %ld\n", N, result);

    return 0;
}

