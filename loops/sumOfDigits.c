#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = 0;
    while (n != 0)
    {
        int a = n % 10;
        s = s + a;
        n = n / 10;
    }
    printf("sum of digits = %d", s);
    return 0;
}