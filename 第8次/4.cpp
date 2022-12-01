#include<stdio.h>
int main(){

    int r, l;
    scanf("%d %d", &r, &l);
    int a[r][l], b[r][l] = {0};
    for(int i = 0; i < r; i++){
        for(int j = 0; j < l; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < l; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int i = 0, j = 0, q = 1, n = 0;
    while(n < r * l){
        if(b[i][j] == 1 || i >= r || j >= l || i < 0 || j < 0){
            if(q == 1)i--;
            if(q == 2)j--;
            if(q == 3)i++;
            if(q == 0)j++;
            q++;
            // n--;
            if(q == 4)q = 0;
            if(q == 1)i++;
            if(q == 2)j++;
            if(q == 3)i--;
            if(q == 0)j--;

        }
        // printf("(%d, %d) = %d \n", i, j, a[i][j]);
        printf("%d ", a[i][j]);
        b[i][j] = 1;
        n++;
        if(q == 4)q = 0;
        if(q == 1)i++;
        if(q == 2)j++;
        if(q == 3)i--;
        if(q == 0)j--;
    }
    return 0;
}