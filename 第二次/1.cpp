#include <stdio.h>

int main(){
	
	int n, c;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]); 
		if(a[i] == 1)printf("no\n");
		if(a[i] == 2)printf("yes\n");
		c = 0;
		for(int b = 2; b < a[i]; b++){     
			
			int m;
			m = a[i] / b;
			if(m * b == a[i]){
				printf("no\n");
				break;
			}
		    else c++;
		}
		if(c)printf("yes\n");
    }
	
	return 0;
	
}
