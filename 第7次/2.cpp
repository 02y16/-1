#include <stdio.h>
int main(){

	int n0 = 0;
	scanf("%d", &n0);
	int n = n0 / 8;
	int a[n][8];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 8; j++){
			a[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++){
		int s;
		scanf("%d", &s);
		int j = 7;
		while(s > 0){
			a[i][j--] = s % 2;
			s = s / 2; 
		}
	}
	int p = a[0][0], q = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 8; j++){
			if(a[i][j] == p)q++;
			else if(p == 0){
				printf("%d ", q);
				q = 1;
				p = 1;
			}
			else if(p == 1){
				printf("%d ", 128 + q);
				q = 1;
				p = 0;
			}
		}
	}
	if(p == 0){
		printf("%d", q);
		q = 1;
		p = 1;
	}
	else if(p == 1){
		printf("%d", 128 + q);
		q = 1;
		p = 0;
	}
	return 0; 
}
