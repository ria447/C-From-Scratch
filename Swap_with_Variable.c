#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("enter the first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("the numbers before swap = %d & %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("the numbers after swap = %d & %d \n", a, b);
}
