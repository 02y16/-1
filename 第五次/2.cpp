#include <stdio.h> 
#include <string.h>

int main(){
	char a[500], b[500];
	scanf("%s", a);
	scanf("%s", b);
	int n = 0, k = 0; 
	int x = 0;
	for(int i = 0; i < strlen(a); i++){
		if(b[k] == '\0')break;
		if(n == strlen(b))break;
		if(a[i] == b[k]){
			n++;
			k++;
		}

	}
	if(n != strlen(b))x = 0;
	else x = 1;
	if(x)printf("YES");
	else printf("NO");
	return 0;
}
