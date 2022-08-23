#include <stdio.h>
void main()
{
    float fah, cel;
    printf("Enter the Fahrenheit Temparature : ");
    scanf("%f", &fah);
    cel = 5.0 / 9 * (fah - 32);
    printf("The corresponding celcious temparature is : %f\n", cel);
}