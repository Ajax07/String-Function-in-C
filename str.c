#include<stdio.h>
#include <string.h>

void reverse(char a[], int start, int end){
	while(start<=end){
		char temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
		start++;
	}
}

int main(){
	char a[]="MY NAME IS AJAY";
	int i;
	puts(a);
	for(i=strlen(a);i>0;i--){
		printf("%c",a[i]);
	}
	reverse(a,3,6); 
	printf("\nthe reverse is new type of \n");
	puts(a);
	
	return 0;
}