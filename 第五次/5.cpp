#include <stdio.h>
#include <string.h>
#include <cstring>
int main(){
	int n;
	scanf("%d\n", &n);
	for(int i = 0; i < n; i++){
		char a[30000], x[2];		//a为方程，  x为变量 
		char *p = "0123456789-+=";
		scanf("%s", a);
//		gets(a);
		double x1 = 0.0;				//x1为变量的值 
		int k = strchr(p, a[0]) - p;	//k为相对地址，或单个字符数值 
		int q = 0;						//类指针 
		while(k >= 0 && k < 13){		//寻找变量x 
			q++;
			k = strchr(p, a[q]) - p;
		}
		x[0] = a[q];
		q = 0;
		k = strchr(p, a[q]) - p;
		int s = 0, xi = 0;     //常数项,  系数； 
		int t = 0;			   //中间量,  
		int zf = 1, deng = 1;  //负号，   等号； 
		while(a[q] != '\0'){
			if(k == 11){
				zf = 1;
				q++;
				k = strchr(p, a[q]) - p;
			}
			if(k == 10){
				zf = 0 - zf;
				q++;
				k = strchr(p, a[q]) - p;
			} 
			while(k >= 0 && k < 10){
				t = t * 10 + deng * zf * k;
				q++;
				k = strchr(p, a[q]) - p;
			}
			if(a[q] == x[0]){
				if(t == 0)t = deng * zf;
				xi = xi + t;
				q++;
				k = strchr(p, a[q]) - p;
			}
			else s = s + t;
			t = 0;
			zf = 1;
			if(k == 12){
				deng = -1;
				q++;
				k = strchr(p, a[q]) - p;
			}	
		}
		x1 = -1 * double(s) / double(xi);
		printf("%c=%.6f\n", x[0], x1); 
	}
	return 0; 
}
