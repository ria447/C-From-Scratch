#include <stdio.h>
#include <string.h>

int main()
{
    int number, i, exp = 0, remainder, sum = 0, product = 1, j, original_num;

    printf("enter the number:");
    scanf("%d", &number);

    original_num = number;

    i = number;
    while (i != 0)
    {
        exp += 1;
        i /= 10;
    }

    while (number != 0)
    {
        remainder = number % 10;
        
        for (j = 1; j <= exp; j++)
        {
            product *= remainder;
        }
        sum += product;
        number = number / 10;
        product = 1;
    }
    printf("%d", sum);

    if (sum == original_num)
        printf("an armstrong number");
    else
        printf("not an armstrong number");
    
    return 0;
}
