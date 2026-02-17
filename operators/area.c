#include <stdio.h>
#define PI 3.14
int main()
{
    int l, b, arR;
    float r, arC;
    scanf("%d %d %f", &l, &b, &r);
    arR = l * b;
    arC = PI * r * r;
    printf("Area of Rectangle is: %d\n", arR);
    printf("Area of Circle: %f", arC);
    return 0;
}