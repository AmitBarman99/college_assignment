#include<stdio.h>
#include<string.h>

int stringlen(char *s){
	int len=strlen(s);
	return len;
}
void revstr(char *str1){
	int i,j,n=0;
	char rev[100];
    while (str1[n] != '\0'){
    	n++;
  	}
  	j = n - 1;
	for (i = 0; i < n; i++){
    		rev[i] = str1[j];
    		j--;
  	}
    rev[i]='\0';
  	printf("\nString After Reverse: %s", rev);
}


void stringcon(char *s1, char *s2){
    int i=0,j=0;
    while (s1[i]!='\0'){
        i++;
    }
    while (s2[j]!='\0'){
        s1[i]=s2[j];  
        j++;
        i++;  
    }
  	s1[i]='\0';  
   	printf("After concatenation, the string would look like: %s", s1);
}

int stringcomp(char *s1, char *s2){

	if(strcmp(s1,s2)==0){
		return 0;
	}
	else{
		return strcmp(s1,s2);
	}
}

char stringcopy(char *s3, char *s4){
    int i=0;
	for (i = 0; s3[i] != '\0'; ++i) {
        s4[i] = s3[i];
    }

    s4[i] = '\0';
    printf("String s2: %s", s4);
}


void main(){
	char str1[100],str2[100];
	printf("Enter your string :\n");
	fgets(str1,100,stdin);
	printf("The string length is : %d\n",stringlen(str1));      //a

	revstr(str1);                                               //b
	printf("\nEnter your second string :\n");
    fgets(str2,100,stdin);
    stringcon(str1,str2);                                       //c

    printf("%d\n",stringcomp(str1,str2));                       //d

    stringcopy(str1,str2);                                      //e
}

