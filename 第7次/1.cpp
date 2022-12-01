#include <stdio.h>
int main(){
	int n0;//输入数据组数 
	scanf("%d", &n0);
	for(int i0 = 0; i0 < n0; i0++){
		int n = 0;
		scanf("%d", &n);//每组数据的个数 
		int a[n];
		for(int i1 = 0; i1 < n; i1++){
			scanf("%d", &a[i1]);
		}
		long long int m = (1 << n) - 1;
		while(m >= 0){
			printf("--> ");
			int b[n];
			int j = n - 1;
			long long int t = m;
			while(j >= 0){
				b[j--] = t % 2;
				t = t / 2; 
			}
			for(int i = 0; i < n; i++){ 
				if(b[i])printf("%d ", a[i]);
			}
			printf("\n");
			m--;
		} 	
	}
	return 0;
}
