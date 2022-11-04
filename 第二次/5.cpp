#include <stdio.h>

int main(){
	
	int N;
	scanf("%d", &N); 
	int m, n;
	for(int i = 0; i < N; i++){
		int a[20];
		scanf("%d %d", &m, &n);
		int k = 0;
		do{
			a[k] = m % n;
			m = m / n;
			k++;
		}while(m > 0);
		for(int i = k - 1 ; i >= 0; i--){
			printf("%d", a[i]);
		}
		printf("\n"); 
		
	}

	return 0;
}
