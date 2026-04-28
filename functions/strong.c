#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int isStrong(int num)
{
    int originalNum = num;
    int sum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        sum += factorial(lastDigit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isStrong(number))
    {
        printf("%d is a Strong Number.\n", number);
    }
    else
    {
        printf("%d is NOT a Strong Number.\n", number);
    }

    return 0;
}