//#include <stdio.h>
//
//int main(){
//	
//	int n;
//	scanf("%d", &n);
//	for(int i = 0; i < n; i++){
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		
//		int d[1000];
//		d[0] = a / b;
//		a = a % b;
//		
//		for(int k = 1; k <=c; k++){
//			d[k] = a * 10 / b;
//			a = a * 10 % b;
//		}
//		d[c + 1] = a * 10 / b;
//		if(d[c+1] > 4)d[c] = d[c] + 1 ;
//		for(int k = c - 1; k >=0; k--){
//			if(d[k+1] > 9)d[k] = d[k] + 1 ;
//			else break;
//		}
//		printf("%d.", d[0]);
//		for(int k = 1; k <=c; k++){
//			printf("%d", d[k] % 10);	
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		
		int d[1000];
		d[0] = a / b;
		a = a % b;
		
		for(int k = 1; k <=c; k++){
			d[k] = a * 10 / b;
			a = a * 10 % b;
		}
		d[c + 1] = a * 10 / b;
		if(d[c+1] > 4)d[c] = d[c] + 1 ;
		for(int k = c - 1; k >=0; k--){
			if(d[k+1] > 9)d[k] = d[k] + 1 ;
			else break;
		}
		printf("%d.", d[0]);
		for(int k = 1; k <=c; k++){
			printf("%d", d[k] % 10);	
		}
		printf("\n");
	}
	return 0;
}
