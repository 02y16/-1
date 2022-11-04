#include <stdio.h>
#include <string.h>
int myhefazifu(char a[]){
	int n = 1, m = 0, k = 0;   //n=1，则为合法字符 
	if(strlen(a) > 3)n = 0;
	else{
		int i = 0;
		if(a[0] == '\0')n = 0;
		if(a[0] == '0')k = 1;
		while(a[i] != '\0'){
			if(a[i] - 48 >= 0 && a[i] - 48 <= 9)m = m * 10 + a[i] - 48;
			else {
				n = 0;
				break;
			}
			if(m > 255 || m < 0){
				n = 0;
				break;
			}
			i++;
		}	
	}
	if(m == 0 && k == 0)n = 0;
	return n;
}
int main(){
	char a[33] = {0}, b[33] = {'a'};
	char c[33] = "End of file";
	int n = 0, m = 0;
	while(1){
		gets(a);
		if(strcmp(a, c) == 0)break;
		int k = 0;
		for(int i = 0; i <= 3; i++){
			while(a[n] != '.' && a[n] != '\0'){
				b[m] = a[n];
				m++;
				n++;
			}
			if(a[n] == '.' && a[n + 1] == '.')k = 0;
			if(a[n] == '.')n = n + 1;
			k = k + myhefazifu(b);
			memset(b, 0, 30);
			m = 0;
		}
		if(a[n] != '\0' || a[n - 1] == '.')k = 0;		
		if(k == 4)printf("YES\n");
		else printf("NO\n");
		memset(a, 0, 30);
		k = 0;
		n = 0;
		if(a[n] == '\0')continue;
	}
	return 0;
}
