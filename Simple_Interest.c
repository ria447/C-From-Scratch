#include <stdio.h>

int main()
{
    float p, r, t, si;
  
    printf("Enter the principle amount: \n");
    scanf("%f", &p);
  
    printf("Enter the rate: \n");
    scanf("%f", &r);
  
    printf("Enter the time:");
    scanf("%f", &t);
  
    si = (float) (p * r * t) / 100;
    printf("Simple Interest= %f", si);
  
    return 0;
}
