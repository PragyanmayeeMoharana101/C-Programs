#include <stdio.h>

int main()
{
    char str[100];
    int l = 0;

    printf("Find the length of a string\n");
    printf("Input the string: ");

    // Take input
    fgets(str, sizeof(str), stdin);

    // Calculate length until newline or null character
    while (str[l] != '\n' && str[l] != '\0')
    {
        l++;
    }

    printf("Length of the string is: %d\n", l);

    return 0;
}