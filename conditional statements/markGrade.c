#include <stdio.h>
int main()
{
    int mark;
    scanf("%d", &mark);
    if (mark > 450 && mark <= 500)
    {
        printf("Grade: A+\n mark: %d", mark);
    }
    else if (mark > 400 && mark <= 450)
    {
        printf("Grade: A\n mark: %d", mark);
    }
    else if (mark > 350 && mark <= 400)
    {
        printf("Grade: B\n mark: %d", mark);
    }
    else if (mark > 300 && mark <= 350)
    {
        printf("Grade: C\n mark: %d", mark);
    }
    else if (mark > 250 && mark <= 300)
    {
        printf("Grade: D\n mark: %d", mark);
    }
    else
    {
        printf("Grade: Fail\n mark: %d", mark);
    }
    return 0;
}