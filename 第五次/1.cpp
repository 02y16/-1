#include <stdio.h> 
#include <string.h>
int mystrstr(char a[], char b[]){
	int n = 0, k = 0; 
	int x = 0;
	for(int i = 0; i < strlen(a); i++){
		if(b[k] == '\0')break;
		if(a[i] == b[k]){
			n++;
			k++;
			x = i;
		}
		else {
			k = 0;
			n = 0; 
		}
	}
	if(n != strlen(b))x = n - 2;
	return x - n + 1;
}
int main(){
	char a[520], b[520];
	gets(a);
	gets(b);
	int x = 0;
	x = mystrstr(a, b);
	printf("%d", x);
	return 0;
}

