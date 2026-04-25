// sum of the elements of an array
#include <stdio.h>

int main()
{
    int arr[] = {5, 8, 25, 74, 85};
    int sum = 0, length;
    float avg;

    length = sizeof(arr) / sizeof(int);

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    avg = sum / 3;
    printf("the sum of the elements of the array is = %d \n", sum);
    printf("the average of the elements of the array is = %f \n", avg);
}
