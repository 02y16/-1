#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int m, n;
	
	for(int i = 0; i < T; i++){
		scanf("%d %d", &m, &n);
		if(m < n){
		int i;
		i = m;
		m = n; 
		n = i;
	    }
		for(int k = n; k > 0; k--){
			if(n % k == 0){
				if(m % k == 0){
					printf("%d\n", k);
					break;
				}
			}
		}
	    continue;	
	}
	
	
	return 0;
}
