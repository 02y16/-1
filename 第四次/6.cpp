#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		char a[n], b[n];
		int A[500] = {0};
		int B[500] = {0};
		int C[500] = {-1};
		scanf("%1s", a);
		int k = 0;
		while(a[0] != '\n'){
			A[k] = a[0] - 48;
			scanf("%c", a);
			k++;
			if(a[0] == ' ')break;
		}
		scanf("%1s", b);
		int m = 0;
		while(b[0] != '\n'){
			B[m] = b[0] - 48;
			scanf("%c", b);
			m++;
		}
		int q = k, t = 0;
		if(k >= m){
			q = k;
			while(m >= 0){
				C[k + 1] = A[k] + B[m] + t;
				if(C[k + 1] >= 10){
					t = 1;
					C[k + 1] = C[k + 1] % 10;
				}
				else t = 0;
				k--;
				m--;
			}
			while(k >= 0){
				C[k + 1] = A[k] + t;
				if(C[k + 1] >= 10){
					t = 1;
					C[k + 1] = C[k + 1] % 10;
				}
				else t = 0;
				k--;
			}
			if(t == 1)C[0] = 1;	
		}
		else {
			q = m;
			while(k >= 0){
				C[m + 1] = A[k] + B[m] + t;
				if(C[m + 1] >= 10){
					t = 1;
					C[m + 1] = C[m + 1] % 10;
				}
				else t = 0;
				k--;
				m--;
			}
			while(m >= 0){
				C[m + 1] = B[m] + t;
				if(C[m + 1] >= 10){
					t = 1;
					C[m + 1] = C[m + 1] % 10;
				}
				else t = 0;
				m--;
			}
			if(t == 1)C[0] = 1;	
		}
		int z;
		for(z = 0; C[z] == -1; z++){
		}
		for(; z <= q; z++){
			if(C[z] == -1)break;
			printf("%d", C[z]);
		}
		printf("\n");
	}
	return 0;
}

