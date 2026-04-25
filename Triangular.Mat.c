// print upper and lower triangular matrices
#include <stdio.h>

int main()
{
    int matrix_1[3][3], upper[3][3], lower[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter first matrix element = ");
            scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("the upper triangular matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > j)
            {
                upper[i][j] = 0;
            }
            else
                upper[i][j] = matrix_1[i][j];
            
            printf("%5d", upper[i][j]);
        }
        printf("\n");
    }

    printf("the lower triangular matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
            {
                lower[i][j] = 0;
            }
            else
                lower[i][j] = matrix_1[i][j];
            
            printf("%5d", lower[i][j]);
        }
        printf("\n");
    }
}
