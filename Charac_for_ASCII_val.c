#include <stdio.h>

int main()
{
    int ascii_val;

    printf("enter the ascii value= \n");
    scanf("%d", &ascii_val);
  
    if (ascii_val <= 127)
        printf("the character for %d is %c", ascii_val, ascii_val);

    else
        printf("enter value less than or equal to 127 \n");
    
    return 0;
}
