#include <stdio.h>

int main()
{
    int row, column;

    printf("enter the number of rows = ");
    scanf("%d", &row);
    printf("Enter the number of columns = ");
    scanf("%d", &column);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i != j)
                printf("%5d ", i * j);
            else
                printf("     ");
        }
        printf("\n");
    }
}
