#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i0 = 0; i0 < n; i0++){
		char A[1000], B[500];
		scanf("%s %s", A, B);
		if(A[0] == '0'){
			printf("0\n");
			continue;
		}
		int la = strlen(A), lb = strlen(B), lc;
		lc = la - lb + 1;
		int a[la + 1], b[lb + 1], c[lc] = {0};
		a[0] = 0, b[0] = 0;
		for(int i1 = 0; i1 < la; i1++)a[i1 + 1] = A[i1] - 48;
		for(int i1 = 0; i1 < lb; i1++)b[i1 + 1] = B[i1] - 48;
		for(int i1 = 0; i1 < lc;){         //a[la] >= 0
			for(int k = lb; k > 0; k--){
				if(a[i1 + k] < b[k]){
					a[i1 + k] += 10;
					a[i1 + k - 1]--;
				}
				a[i1 + k] -= b[k];
			}
			if(a[i1] < 0){
				for(int k = lb; k > 0; k--){
					a[i1 + k] += b[k];
					if(a[i1 + k] > 9){
						a[i1 + k - 1]++;
						a[i1 + k] -= 10;
					}
				}
				if(i1 == 0 && c[0] != 0)printf("%d", c[i1]);
				if(i1 > 0)printf("%d", c[i1]);
				i1++;
			}
			else c[i1]++;
		}
		printf("\n");
	}
	return 0;
}



