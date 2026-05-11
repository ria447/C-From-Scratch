#include <stdio.h>

int main()
{
    int arr[] = {4, 8, 65, 24, 85}, temp, length;

    length = sizeof(arr) / sizeof(int);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("the second max element is %d", arr[length - 2]);
}
