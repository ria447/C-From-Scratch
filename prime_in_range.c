// we have to find the number of prime numbers in a given range

#include <stdio.h>

int main()
{
    int start, end, count = 0;

    printf("enter the starting number greater than 1: ");
    scanf("%d", &start);
    printf("enter the ending number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
            
        }   

        if(count == 0)
        printf("%d ", i);
    }
}
