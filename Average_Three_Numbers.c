#include <stdio.h>

int main()
{
    int a, b, c;
    float average; 

    printf("Enter value of a: \n");
    scanf("%d", &a);
    printf("Enter value of b: \n");
    scanf("%d", &b);
    printf("Enter value of c: \n");
    scanf("%d", &c);
  
    average = (float) (a + b + c) / 3;        //type-casting
    printf("%f", average);
    return 0;
} 
