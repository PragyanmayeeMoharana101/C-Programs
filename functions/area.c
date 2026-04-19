#include <stdio.h>
void areaCircle(int r)
{
    float ar = 3.14 * r * r;
    printf("Area of Circle is : %f\n", ar);
}
void areaRectangle(int l, int b)
{
    int ar = l * b;
    printf("Area of Rectangle is : %d\n", ar);
}
int main()
{
    int r, l, b;
    scanf("%d %d %d", &r, &l, &b);
    areaCircle(r);
    areaRectangle(l, b);
    return 0;
}
