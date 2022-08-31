// use this run command

//   $./a.out file1.txt file2.txt

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 3)
        printf("unsatisfactory results ");
    FILE *fptr1, *fptr2;
    fptr1 = fopen(argv[1], "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", argv[1]);
        exit(0);
    }
    fptr2 = fopen(argv[2], "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", argv[2]);
        exit(0);
    }
    char c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    printf("\nContents copied to %s", argv[2]);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}