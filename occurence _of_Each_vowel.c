// print a histogram for all the occurrences of each vowel present in a string input by the user

#include <stdio.h>

int main()
{
    char string[100];
    int i, j, count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;

    printf("enter a string:");
    fgets(string, 100, stdin);

    for (i = 0; string[i] != '\0'; i++)
        {   

            switch(string[i])
            {
                case 'a':
                case 'A':
                    count_a += 1;
                    break;
                case 'e':
                case 'E':
                    count_e += 1;
                    break;
                case 'i':
                case 'I':
                    count_i += 1;
                    break;
                case 'o':
                case 'O':
                    count_o += 1;
                    break;
                case 'u':
                case 'U':
                    count_u += 1;
                    break;
            }
        }

    printf("a: ");
    for (j = 0; j < count_a; j++)
        printf("*");
    printf("\n");

    printf("e: ");
    for (j = 0; j < count_e; j++)
        printf("*");
    printf("\n");

    printf("i: ");
    for (j = 0; j < count_i; j++)
        printf("*");
    printf("\n");

    printf("o: ");
    for (j = 0; j < count_o; j++)
        printf("*");
    printf("\n");

    printf("u: ");
    for (j = 0; j < count_u; j++)
        printf("*");
    printf("\n");


}
