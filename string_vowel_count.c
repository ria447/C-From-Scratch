#include <stdio.h>

int main()
{
    char str[50];
    int i = 0, count = 0;

    printf("Enter the string: ");
    fgets(str, 50, stdin);

    while(str[i] != '\0')
    {
        switch (str[i])
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                count++;
        }
        i++;

    }

    printf("The number of vowels in the string is: %d", count);
}
