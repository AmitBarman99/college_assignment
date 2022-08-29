#include <stdio.h>
#include<string.h>

void main() {
    char str[100][100],temp[100];
    printf("Enter 10 names :\n");
    for (int k = 0; k < 10; k++){
       scanf("%s",str[k]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
            
        }
        
    }
    printf("The sorted name list is :\n");
    for (int k = 9; k >= 0; k--)
    {
        printf("%s\n",str[k]);
    }
    
    
}