#include <stdio.h>
void main()
{
    int basic;
    float HRA, DA, gross, pf, ptax, NetSalary;
    printf("Enter The Basic salary of an employee : \n");
    scanf("%d", &basic);
    HRA = 0.3 * basic;
    DA = 1.19 * basic;
    pf = 0.12 * basic;
    ptax = 200.0;
    gross = basic + HRA + DA;
    NetSalary = gross - (pf + ptax);
    printf("The HRA = %f\nDA= %f\npf= %f\nAnd the gross = %f\n", HRA, DA, pf, gross);
    printf("The net salary of that person is : %f\n", NetSalary);
}