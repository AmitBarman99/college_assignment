#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int noc = 0, nol = 0;
    fp = fopen("file1.txt","r");
    if (fp == NULL)
    {
        printf("can't open the file .\n");
        exit(0);
    }
    else
    {
        while (ch != EOF)
        {
            ch = fgetC(fp);
            if (ch == EOF)
                break;
            noc++;
            if (ch == '\n')
                nol++;
        }
        fclose(fp);
        printf("the number of characters are : % d ", noc);
        printf("the number of line are : % d ", nol);
    }
}