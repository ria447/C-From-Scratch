#include <stdio.h>
#define PI 3.14

int main()
{
    float r, area, perimeter;

    printf("Enter the value of r= \n");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area= %f", area);

    perimeter = 2 * PI * r;
    printf("Perimeter= %f", perimeter);
    return 0;
}
