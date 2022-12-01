#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
    	int x1, y1, z1;
    	int x2, y2, z2;
    	int x3, y3, z3;
    	int r1, r2, d1, d2;
    	scanf("%d %d %d %d %d %d %d %d %d %d %d", &x1, &y1, &z1, &r1, &x2, &y2, &z2, &r2, &x3, &y3, &z3);
    	d1 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1) + (z3 - z1) * (z3 - z1);
    	d2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2) + (z3 - z2) * (z3 - z2);
    	int t = 0;
    	if(r1 * r1 >= d1 || r2 * r2 >= d2)t = 1; 
		if(!t || t && (r1 * r1 - d1)==(r2 * r2 - d2) )printf("No\n");
    	else printf("Yes\n");
	}
	return 0;
}
