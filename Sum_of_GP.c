// to print the sum of geometric progression by taking user inputs
#include <stdio.h>

int main()
{
    int a, r, n, num = 1;
    float sum;

    printf("enter the value of n = ");
    scanf("%d", &n);
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of r = ");
    scanf("%d", &r);

    for (int i = 1; i <= n; i++)
    {
        num *= r;
    }
    sum = a * (num - 1) / (r - 1);
    printf("the sum of the gp is = %f", sum);
}
