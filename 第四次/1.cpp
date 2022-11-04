#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		for(int a = 0; 3 * a <= y; a++){
			for(int b = 0; 3 * a + 2 * b <= y; b++){
				int c = x - a - b;
				if(3 * a + 2 * b + c == y)printf("%d %d %d\n", a, b, c);
			}
		}
	}
	
	return 0;
}
