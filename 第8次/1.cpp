#include<stdio.h>
int main(){
    int a;
    long long int n;
    int m[1000] = {0};
    scanf("%d %lld", &a, &n);
    while(a != 0 || n != 0){
		long long int t = a, q = n;
		int i = 0;
		while(t != 1){
			m[i] = q / t;
//			printf("%d : %lld = %lld * %lld + %lld\n", i, q, m[i], t, q % t);
			i++;
			long long int v = t;
			t = q % t;
			q = v;
		}
		int k = 0;
		if(i % 2 == 0)k = 1; 
		i--;
		long long int b = 1, c = m[i];
		while(i >= 0){
			long long int d = c;
//			printf("%d : %d %d\n", i, b, c);
			c = m[--i] * c + b;
			b = d;
		}
		if(k)printf("%lld\n", b);
		else printf("%lld\n", n - b);
        scanf("%d %lld", &a, &n);
    }
    return 0;
}
