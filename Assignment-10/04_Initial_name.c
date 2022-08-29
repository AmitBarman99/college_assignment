#include <stdio.h>
#include<string.h>

void main() {
    int i=0,n=0;
    char k, str[100],result[100];
    printf("Enter the full name to convert into Initial name : \n");
    gets(str);                              
    // fgets(str,100,stdin);               

    printf("The Initial name is according to following example : \n");
    while (str[i]!='\0'){
        if(i==0 || str[i-1]==' '){
            k=i+1;
            result[n++]=str[i];
            result[n++]='.';
            result[n++]=' ';
        }
        i++;
    }
    n=n-2;
    for (int j = k; str[j]!='\0'; j++){
        result[n++]=str[j];
    }
    result[n++]='\0';
    printf("%s\n",result);
    
    
    
}