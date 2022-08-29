#include <stdio.h>

void main() {
    char s1[20],s2[20],res[20];
    printf("Enter two number : \n");
    scanf("%s%s",s1,s2);

    int x,y,n;
    sscanf(s1,"%d",&x);
    sscanf(s2,"%d",&y);

    sprintf(res,"%d",x+y);
    printf("Value of these two integers : %d\t%d\nAnswer in string : %s\n",x,y,res);

    
}