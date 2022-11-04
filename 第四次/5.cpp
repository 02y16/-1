#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int k[1000] = {0}, a = 1;
		while(a != 0){
			scanf("%d", &a);
			if(a == 0)break;
			k[a - 1] = 1;
		}
		for(int q = 0;;q++){
			if(k[q] == 0){
				printf("%d\n", q + 1);
				break;
			}
		} 
	}
	
	return 0;
}
