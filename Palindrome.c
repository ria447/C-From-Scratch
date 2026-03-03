#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, length, count = 0;

    char string[50];

    printf("enter the string:");
    fgets(string, 50, stdin);                       

    length = strlen(string);
    j = length - 2;                                                         // fgets stores newline character also at the end

    for (i = 0; i < length - 1; i++)
        {
            if (string[i] == string[j])
                count += 1;
            j--;
        }

    if (count == length - 1)
        printf("palindrome");
    else
        printf("not a palindrome");
    return 0;
}
