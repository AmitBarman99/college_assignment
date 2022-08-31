#include <stdio.h>
#include <stdlib.h>
void encrypt(char filename[])
{
    FILE *fp = fopen(filename, "r"), *ft = fopen("text.txt", "w");
    char ch;
    if (fp == NULL)
    {
        printf("text not available !");
        exit(0);
    }
    else
    {
        ch = fgetc(fp);
        while (ch != EOF)
        {
            if (ch == EOF)
                break;
            ch = ch + 3;
            fputc(ch, ft);
            ch = fgetc(fp);
        }
    }
    fclose(fp);
    fclose(ft);
}
void decrypt(char filename[])
{
    FILE *fp = fopen(filename, "r"), *ft = fopen("text.txt", "w");
    char ch;
    if (fp == NULL)
    {
        printf("text not available !");
        exit(0);
    }
    else
    {
        ch = fgetc(fp);
        while (ch != EOF)
        {
            if (ch == EOF)
                break;
            ch = ch - 3;
            fputc(ch, ft);
            ch = fgetc(fp);
        }
    }
    fclose(fp);
    fclose(ft);
}
void main()
{
    char ch[100];
    gets(ch);
    encrypt(ch);
    decrypt(ch);
}