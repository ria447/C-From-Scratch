#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number = ");
    scanf("%d", &a);
    printf("Enter second number = ");
    scanf("%d", &b);

    printf("The numbers before swap = %d & %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The numbers after swap = %d & %d", a, b);
}
