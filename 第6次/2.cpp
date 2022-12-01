#include<stdio.h>
int main(){
	
	int n;
	scanf("%d\n", &n);
	for(int i = 0; i < n; i++){
		int m = 0, N = 0;
		scanf("%d", &m);
		if(m == 1){
			printf("1\n");
			continue;
		}
		int k = 2;
		for(k = 2; k <= m; k++){
			int q = 0;
			for(int s = 2; s < k; s++){
				if(k % s == 0){
					q = 1;
					break;
				}
			}
			if(q)continue;
//			printf("N = %d K = %d \n", N, k);
			if(N == 0 && m % k == 0){
				printf("%d", k);
				m = m / k;
				N = 1;
			}
			while(m % k == 0){
				printf("*%d", k);
				m = m / k;
			}
		}
		printf("\n",k);
	}
	return 0;
}
