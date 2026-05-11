#include <stdio.h>

int main()
{
    int arr[3][3], sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter a element \n");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }

    printf("the sum of diagonal elements is %d", sum);
}
