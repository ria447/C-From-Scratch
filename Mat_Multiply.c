//  (3 * 3)Matrix Multiplication
#include <stdio.h>

int main()
{
    int matrix_1[3][3], matrix_2[3][3], multiplication[3][3], sum = 0, product;

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
            multiplication[i][j] = 0;
            
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                product = matrix_1[i][k] * matrix_2[k][j];
                multiplication[i][j] += product;
            }
            
        }
        
    }

    printf("the product of the two matrices is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            printf("%5d", multiplication[i][j]);
        }
        printf("\n");
    }

}
