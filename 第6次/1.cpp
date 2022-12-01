#include <stdio.h>
int main(){
	int N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		int n;
		scanf("%d", &n);
		int a[3] = {0};
		for(int i1 = 0; i1 < n; i1++){
			if(i1 == 0){
				scanf("%d", &a[0]);
				a[1] = a[0];
				a[2] = a[0];
			}
			if(i1 == 1){
				scanf("%d", &a[1]);
			}
			if(i1 >= 2){
				scanf("%d", &a[2]);
			}
			if(a[2] < a[1]){
				int t = a[1];
				a[1] = a[2];
				a[2] = t;
			}
			if(a[1] < a[0]){
				int t = a[0];
				a[0] = a[1];
				a[1] = t;
			}
			if(a[0] == a[1])a[1] = a[2];
		}
		if(n == 1)printf("ERROR\n");
		else if(a[0] == a[1])printf("ERROR\n");
		else printf("%d\n", a[1]);
	}
	return 0;
} 
