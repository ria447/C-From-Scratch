// to check if the matrix is symmetric or not

#include <stdio.h>

int main()
{
    int mat[3][3], transpose[3][3], count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter an element: ");
            scanf("%d", &mat[i][j]);
            transpose[j][i] = mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == transpose[i][j])
            {
                count++;
            }
        }
    }

    if (count == 9)
    {
        printf("It is symmetric");
    }
    else
        printf("Not symmetric");

}
