#include <stdio.h>
int main()
{
    int n, d, a, m;
    scanf("%d", &n);
    a = n % 10;
    n = n / 10;
    d = n % 10;
    m = n / 10;
    int sum = a + d + m;
    printf("sum : %d", sum);
    return 0;
}