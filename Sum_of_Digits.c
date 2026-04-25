// to print the sum of digits of a number
#include <stdio.h>

int main()
{
    int num, digit, sum = 0, original;

    printf("enter the number = ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("the sum of digits of the number %d is = %d", original, sum);
}
