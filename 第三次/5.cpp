#include <stdio.h>

int main(){
	int n, k, m;
	scanf("%d %d %d", &n, &k, &m);  //总人数，开始编号， 周期 
	int w[n], x = n, j = 0;         //状态， 剩余人数， 在报的数 
	for(int i = 0; i < n; i++){     //初始状态为1， 
		w[i] = 1;
	} 
	
	
	for(int i = k - 1; x > 2;){
		if(i > n - 1)i = 0;
		if(w[i])j++;
		if(j == m){
			j = 0;
			x--;
			w[i] = 0;
		}
		i++;
	} 
//	for(int i = k - 1; x > 2; i++){
//		if(i == n - 1 && w[i] == 0)i = 0;
//		for(; w[i] == 0; i++){
//			if(i == n - 1)i = 0;
//		}
//	    j++;
//		if(j == m){
//			j = 0;
//			x--;
//			w[i] = 0;
//		}
//		if(i == n - 1)i = -1;
//	} 


	for(int i = 0; i < n; i++){
		if(w[i] == 1)printf("%d ", i + 1);
	}	
	return 0;
}

