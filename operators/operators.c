#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int add = a + b;
    int sub = a - b;
    int pro = a * b;
    float divi = a / b;
    int mod = a % b;
    printf("Addition: %d\n", add);
    printf("Substaction: %d\n", sub);
    printf("Multiplication: %d\n", pro);
    printf("Division: %f\n", divi);
    printf("Modulus: %d\n", mod);
    return 0;
}