#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int num;
		scanf("%d", &num);
		int s = 0;
		for(int a = 0; a <= 3; a++){
			for(int b = 0; b <= 3; b++){
				int c = num - a - b;
				if(c <= 6 && c >= 0)s++;
			}
		}
		printf("%d\n", s);		
	}
	
	return 0;
}
