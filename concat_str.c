#include <stdio.h>

int main()
{
    char dest[] = "ria", src[] = "mehta";
    int i = 0, j = 0, k = 0;

    while(dest[i] != '\0')
    {
        i++;
    }

    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    printf("%s", dest);
}
