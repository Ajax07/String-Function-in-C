#include <stdio.h>
#include <string.h>

void reversestr(char str[]){
	char temp;
	int i,j;
	for(i=0,j=strlen(str)-1;i<=j;i++,j--){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

void reverse(char str[],int start, int end){
	while(start<=end){
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

int main(){
	char str[50];
	strcpy(str,"I have many books");
	reversestr(str);
	puts(str);
	reverse(str,6,9);
	puts(str);
	return 0;
}