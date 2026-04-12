#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int s = 0;
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("Sum of numbers from 1 to %d is : %d", n, s);
    return 0;
}