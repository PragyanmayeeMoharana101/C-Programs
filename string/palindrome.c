#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[])
{
    int low = 0;
    int high = strlen(str) - 1;

    while (low < high)
    {
        if (str[low] != str[high])
        {
            return false; // Characters don't match
        }
        low++;
        high--;
    }
    return true; // All characters matched
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}