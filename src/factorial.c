#include <stdio.h>

long int factorial(int n);

int main()
{
    int number;
    
    printf("- Type a positive integer: ");
    scanf("%d", &number);
    
    printf("%ld\n", factorial(number));
    
    return 0;
}

long int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
