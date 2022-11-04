#include <stdio.h>

int main(){
	
	int n, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		float a;
		scanf("%f", &a);
		if(a < 0){
			printf("error");
			continue; 
		}
		float x0 = 0.0, x1 = 0.0;
		while((x0 + 1.0) * (x0 + 1.0) <= a){
			x0 = x0 + 1.0;
		}
		float t = 0;
		while(!(t - x0 < 0.00001 && x0 - t < 0.00001)){
			x1 = (x0 + a / x0)/2;
			t = x0;
			x0 = x1;
		}
		printf("%.5f\n", x0);
	
	}

	return 0;
}
