#include <stdio.h>
#include <string.h>
int main(){
	
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		char x[100000];
		scanf("%s", &x);
		int leng;
		leng = strlen(x);
		printf("%d\n", leng);
	}
	
	return 0;
}
