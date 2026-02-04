#include <stdio.h>

int main()
{
    int a, b, c, maximum;

    printf("enter the value of a=\n");
    scanf("%d", &a);
    printf("enter the value of b=\n");
    scanf("%d", &b);
    printf("enter the value of c=\n");
    scanf("%d", &c);

    if (a > b)
        if (a > c)
            printf("a is the largest number\n");
        else
            printf("c is the largest number\n");
    else
        printf("b is the largest number\n");

    return 0;
}
