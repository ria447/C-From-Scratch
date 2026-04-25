// Factorial of number by iteration
#include <stdio.h>

int main()
{
    int num, factorial = 1;

    printf("Enter the number = ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("the factorial of the number %d is %d", num, factorial);
}
