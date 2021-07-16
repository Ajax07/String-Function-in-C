#include<stdio.h>
#include <stdlib.h>

int main(){

	char *str;
	printf("enter\n");
	str = (char *)malloc(10);
	scanf("%s",str);
	printf("%s\n",str );
	puts(str);
	return 0;
}