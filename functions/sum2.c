#include <stdio.h>

void sum()
{
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = a + b;
    printf("Sum: %d\n", result);
}

int main()
{
    sum();
    return 0;
}