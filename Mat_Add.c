// Addition of Matrices
#include <stdio.h>

int main()
{   
    int matrix_1[3][3], matrix_2[3][3], sum[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter first matrix element = ");
            scanf("%d", &matrix_1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter second matrix element = ");
            scanf("%d", &matrix_2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
            printf("%5d", sum[i][j]);
        }
        printf("\n");
    }


}
