#include <stdio.h>
int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int f = Factorial(n);
    printf("The Factorial of %d is %d", n, f);
    return 0;
}