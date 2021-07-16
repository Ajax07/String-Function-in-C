#include <stdio.h>
#include <string.h>

int main(){
	char str1[10], str2[20];
	printf("Enter one string: \n");
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	if((strcmp(str1,str2))==0)
		printf("string is same\n");
	puts(str1);
	puts(str2);
	return 0;
}