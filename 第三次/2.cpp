#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int k = 0; k < n; k++){
		scanf("%d", &a[k]);
	}
	for(int i = 0; i < n - 1; i++){
		int t;
//		for(int q = i; q >= 0; q--){
			for(int k = 0; k < n - 1; k++){
				if(a[k] > a[k + 1]){
					t = a[k + 1];
					a[k + 1] = a[k];
					a[k] = t;
				}
			}
//		}
		for(int m = 0; m < n;m++){
			printf("%d ", a[m]);
		}
		printf("\n");	
	}
	
	return 0;
} 
