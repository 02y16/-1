#include <stdio.h>
#include <string.h>
int main(){
	
	int m, n;
	scanf("%d %d", &m, &n);
	int a[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}	
	}
	int k;
	scanf("%d", &k);
	
	int p, l;   //指令参数 
	for(int q = 0; q < k; q++){
		char is[4];
		scanf("%s", is);

//  第一类指令############################################## 
		if(is[0] == 'S'){
			scanf("%d %d", &p, &l);
			p--;
			l--;
			if(is[1] == 'R'){
				for(int j = 0; j < n; j++){
					int t = a[p][j];
					a[p][j] = a[l][j];
					a[l][j] = t;	
				}
			}
			if(is[1] == 'C'){
				for(int i = 0; i < m; i++){
					int t = a[i][p];
					a[i][p] = a[i][l];
					a[i][l] = t;	
				}	
			}
		}
//  第二类指令############################################## 
		if(is[0] == 'D'){
			scanf("%d", &p);
			p--;
			if(is[1] == 'R'){
				for(int i = p + 1; i < m; i++){
					for(int j = 0; j < n; j++){
						a[i - 1][j] = a[i][j]; 
					}
				}
				m--;
			}
			if(is[1] == 'C'){
				for(int j = p + 1; j < n; j++){
					for(int i = 0; i < m; i++){
						a[i][j - 1] = a[i][j]; 
					}
				}
				n--;
			}
		}
//  第三类指令############################################## 
		if(is[0] == 'I'){
			scanf("%d", &p);
			p--;
			if(is[1] == 'R'){
				for(int i = m - 1; i >= p; i--){
					for(int j = 0; j < n; j++){
						a[i + 1][j] = a[i][j]; 
					}
				}
				m++;
				for(int j = 0; j < n; j++){
					a[p][j] = 0;
				}
			}
			if(is[1] == 'C'){
				for(int j = n - 1; j >= p; j--){
					for(int i = 0; i < m; i++){
						a[i][j + 1] = a[i][j]; 
					}
				}
				n++;
				for(int i = 0; i < m; i++){
					a[i][p] = 0;
				}
			}
		}
//		printf("1 == %c , 2 == %c\n", is[0], is[1]);	
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");	
	}
	return 0;
} 
