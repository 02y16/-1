#include<stdio.h>
int p[1];
void hh(int a[], int m, int n){
    if(m == n + 1){
        p[0]++;
        return;
    }
    if(a[m] != 0 && (a[m] - a[m - 1] > 1 || a[m] - a[m - 1] < -1))return;
    if(a[m] != 0 && a[m] - a[m - 1] < 2 && a[m] - a[m - 1] > -2)hh(a, m + 1, n);
    if(m == 1 && a[1] == 0){
        for(int i = 1; i <= n; i++){
            a[1]++;
            hh(a, 2, n);
        }
    }
    if(m != 1 && a[m] == 0){
        if(a[m - 1] > 1){
            a[m] = a[m - 1] - 1;
            hh(a, m + 1, n);

        }
        a[m] = a[m - 1];
        hh(a, m + 1, n);
        a[m] = 0;
        if(a[m - 1] < n){
            a[m] = a[m - 1] + 1;
            hh(a, m + 1, n);
            a[m] = 0;
        }
    }
    if(m == 1)printf("%d\n", p[0]);
    return;
}
int main(){
    while(1){
        int n;
        scanf("%d", &n);
        if(n == 0)break;
        int a[n + 1] = {0};
        for (int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        a[0] = a[1];
        p[0] = 0;
        hh(a, 1, n);
    }
    return 0;
}