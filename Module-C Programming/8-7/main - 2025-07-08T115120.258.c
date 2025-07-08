#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) 
{
    // Base case: Factorial of 0 or 1 is 1
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    // Recursive case: n * factorial(n-1)
    else 
     {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
  else 
    {
        long long result = factorial(num);
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}