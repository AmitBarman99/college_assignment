#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int dec2bin(int num)
{
    int r, i = 1;
    int bin = 0;
    while (num != 0)
    {
        r = num % 2;
        num = num / 2;
        bin = bin + r * i;
        i = i * 10;
    }
    return bin;
}
int bin2dec(int num)
{
    int dec = 0, i = 0, r;
    while (num != 0)
    {
        r = num % 10;
        num /= 10;
        dec = dec + r * pow(2, i);
        ++i;
    }
    return dec;
}
void main()
{
    while (1)
    {
        int m;
        printf("1. Decimal to binary conversion\n2. Binary to Decimal conversion\n3. Exit\n\n");
        printf("Enter your operation no. :\n");
        scanf("%d", &m);
        int num1, result, results, num2;
        switch (m)
        {
        case 1:
            printf("You select Decimal to Binary conversion\n");
            printf("Enter your number to perform :\n");
            scanf("%d", &num1);
            result = dec2bin(num1);
            printf("The binary equivalent of %d is : %d\n", num1, result);
            break;
        case 2:
            printf("You select Binary to Decimal conversion\n");
            printf("Enter your number to perform\n");
            scanf("%d", &num2);
            results = bin2dec(num2);
            printf("The Decimal equivalent of %d is : %d\n",
                   num2, results);
            break;
        case 3:
            exit(0);
        default:
            printf("Plz enter right index, You selected wrong\n");
            break;
        }
    }
}