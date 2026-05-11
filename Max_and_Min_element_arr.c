// finding out maximum and minimum elements of a list with the help of pointers and functions

#include <stdio.h>

int max(int *ptr, int length)
{   
    int maximum = *ptr;
    for (int i = 0; i < length; i++)
    {
        int element = *(ptr++);
        if (maximum < element)
        {
            maximum = element;
        }
    }

    return maximum;
}

int min(int *ptr, int length)
{   
    int minimum = *ptr;
    for (int i = 0; i < length; i++)
    {
        int element = *(ptr++);
        if (minimum > element)
        {
            minimum = element;
        }
    }
    return minimum;
}

int main()
{
    int arr[] = {5, 4, 85, 74, 23}, *ptr;
    int length = sizeof(arr) / sizeof(int);
    ptr = arr;

    printf("the maximum element is: ");
    int maximum = max(ptr, length);
    printf("%d", maximum);
    printf("\n");
    printf("the minimum element is: ");
    int minimum = min(ptr, length);
    printf("%d", minimum);
}
