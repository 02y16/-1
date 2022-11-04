#include <stdio.h>
int main(){
	
	int m, n;
	scanf("%d %d", &m, &n);
	int d[m][n];
	int i = 0, j = 0;
	int ac = 1;  //ac=1сриоё╛0сроб
	for(int q = 1; q <= m * n; q++){
		if(ac){
			if(j >= n){
				i = i + 2;
				j--;
				d[i++][j--] = q;
				ac = 0;
				continue;
			}
			if(i < 0 ){
				i++;
				d[i++][j--] = q;
				ac = 0;
				continue;
			}	
			d[i--][j++] = q;
			continue;
		}
		if(ac == 0){
			if(i >= m){
				j = j + 2;
				i--;
				d[i--][j++] = q;
				ac = 1;
				continue;
			}
			if(j < 0 ){
				j++;
				d[i--][j++] = q;
				ac = 1;
				continue;
			}				
			d[i++][j--] = q;
		}
	}	
	
	for(int M = 0; M < m; M++){
		for(int N = 0; N < n; N++){
			printf("%d ", d[M][N]);
		}
		printf("\n");
	}

	return 0;
}
