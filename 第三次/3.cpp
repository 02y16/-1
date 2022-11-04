#include <stdio.h>

int main(){
	long long int a, b;
	scanf("%d", &a);
	int sub = 28, longer =0;
	int w[4000];
	w[1] = 3;
	w[2] = 5;
	w[3] = 7;
	w[4] = 11;
	int n = 5;
	for(int i = 13; i <= a ; i = i + 2){
		int k = 0;
		for(int q = 1; w[q] * w[q] <= i && q < 4000; q++){
			if(i % w[q] == 0){
				k++;
				break;
			}
		}
		if(k == 0){
			if(i < 4000)w[n++] = i;
			sub = sub + i;
			if(sub >= 1000000000){
				longer = longer + sub / 1000000000;
				sub = sub % 1000000000;
			}
		}
	}
	if(longer == 0)printf("%lld", sub); 
	else printf("%lld%.9lld", longer, sub);
	
	return 0;
} 
