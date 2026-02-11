#include <stdio.h>
#include <string.h>
int main()
{
    char std_name[101];
    scanf("%[^\n]", std_name);
    printf("Student Name: %s\n", std_name);
    return 0;
}