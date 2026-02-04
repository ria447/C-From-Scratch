#include <stdio.h>

int main()
{
    float cost_price, selling_price, profit;

    printf("Enter the cost price= \n");
    scanf("%f", &cost_price);
    printf("Enter the selling price= \n");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
        {profit = selling_price - cost_price;
        printf("the profit is %f", profit); }
    
    else
        printf("no profit");

    return 0;
}
