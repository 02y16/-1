#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i0 = 0; i0 < n; i0++){
		char A[500], B[500];
		scanf("%s", A);
		scanf("%s", B);
		int l = strlen(A) + strlen(B);
		int s[l][l]= {0}, a[l], b[l];
		for(int i1 = 0; i1 < l; i1++){
			a[i1] = 0;
			b[i1] = 0;
			for(int i2 = 0; i2 < l; i2++){
				s[i1][i2]= 0;
			}
		}
		for(int i1 = strlen(A) - 1; i1 >= 0; i1--)a[i1] = A[strlen(A) - i1 - 1] - 48;
		for(int i1 = strlen(B) - 1; i1 >= 0; i1--)b[i1] = B[strlen(B) - 1 - i1] - 48;
		int j = 0;		
		for(; j < strlen(B); j++){
			int k = 0;
			for(; k < strlen(A); k++){
				if(k == 0){
					s[j][j + k] = a[k] * b[j] % 10;
					s[j][j + k + 1] = a[k] * b[j] / 10;
				}
				else{
					s[j][j + k + 1] = (a[k] * b[j] + s[j][j + k]) / 10;
					s[j][j + k] = (a[k] * b[j] + s[j][j + k]) % 10;
				}
			}
		}
		int c[l];
		for(int i = 0; i < l; i++)c[i] = 0;
		for(j = 0; j < l; j++){
			for(int k = 0; k < l; k++){
				c[j] = c[j] + s[k][j]; 
			}
			c[j + 1] = c[j] / 10;
			c[j] = c[j] % 10;
		}
		int i = l - 1;
		while(c[i] == 0){
			i--;
		}
		for(; i >= 0; i--){
			printf("%d", c[i]);
		}
		printf("\n");
	}
	return 0;
} 
