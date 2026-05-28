#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i = 0;

    printf("Enter string 1: ");
    fgets(str1, 50, stdin);
    printf("Enter string 2: ");
    fgets(str2, 50, stdin);

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] == str2[i])
        {
            i++;
        }
        else
        {
            printf("not equal");
            return 0;
        }

    }
    printf("equal");
}
