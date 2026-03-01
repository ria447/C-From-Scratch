// find out the first and the second maximum number among the five numbers

#include <stdio.h>

int main()
{
    int i, num, max_1 = 0, max_2 = 0;

    for (i = 0; i < 5; i++)
        {
            printf("enter a number:");
            scanf("%d", &num);

            if (num > max_1)
                max_1 = num;
            else if (num < max_1 && num > max_2)
                max_2 = num;

        }
    printf("the first largest number is: %d \n", max_1);
    printf("the second largest number is: %d \n", max_2);
}
