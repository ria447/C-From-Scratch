// copying content from one file to other using command line arguments
#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE *fp1, *fp2;
    char c[100], word;

    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");

    for(int i = 0; c != '\0'; i++)
    {
        fgets(c, sizeof(c), fp1);
        fputs(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);
}
