#include <stdio.h>
#include <string.h>
int main(){
	char A[4] = "END";
	char B[3] = "()"; 
	while(1){
		char a[1000] = {0};
		while(1){
			char b[2] = {0}; 
			b[0] = getchar();
			if(b[0]== '\n')break;
			if(b[0]== ' ')continue;
			strcat(a, b);
		}
		if(strcmp(a, A) == 0)break;
		if(strcmp(a, B) == 0){
			printf("0 1\n");
			continue;
		}
		int l = 1, n = 0, la = strlen(a), t = 0;
		for(int i = 0; i < la; i++){
			if(a[i] == ',' && t == 1)l++;
			if(a[i] == '(')t++;
			if(t > n)n = t;
			if(a[i] == ')')t--;
		} 
		printf("%d %d\n", l, n);
	}
	return 0;
}
