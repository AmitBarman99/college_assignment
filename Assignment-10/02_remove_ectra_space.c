#include<stdio.h>
#include<string.h>

void main(){
	char str[200],s[200];
	int k=0;
	printf("Enter your sentence :\n");
	fgets(str,200,stdin);
	
	int len= strlen(str);

	for(int i=0; i<len; i++){
        	if(str[i]==32 && str[i+1]==32){
            	char temp = i;
            	for(int j=i; j<(len-1); j++){
                	str[j] = str[j+1];
           	 }
           	len--;
            	str[len]='\0';
            	i = 0;
        	}
    	}
	printf("sentence  without extra space is : \n %s\n",str);
}
