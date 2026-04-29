#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int originalNum, remainder, n = 0;
    float result = 0.0;

    originalNum = num;

    for (originalNum = num; originalNum != 0; ++n)
    {
        originalNum /= 10;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if ((int)result == num)
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}