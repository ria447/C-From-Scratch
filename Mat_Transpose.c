// Transpose of (3 * 3) matrix
#include <stdio.h>

int main()
{
    int matrix_1[3][3], transpose[3][3], temp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter first matrix element = ");
            scanf("%d", &matrix_1[i][j]);
            transpose[j][i] = matrix_1[i][j];
        }
    }

    printf("the transpose of the matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%5d", transpose[i][j]);
        }
        printf("\n");
    }
}
