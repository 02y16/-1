#include <stdio.h>
#include <string.h>

int main(){
	char a[30000], c[51], b[600][51];
	int al, bl[600] = {0}, r = 0, fg = 0, q = 0;
    fgets(a, 30000, stdin);
    al = strlen(a);
    for(int i = 0; i < al; i++){
        if(a[i] != ' ' && a[i] != '\n'){
            c[r] = a[i];
            r++;
        }
        if(a[i]== ' ' || a[i]== '\n'){
            if(a[i + 1] == ' ')continue;
            for(int j = 0; j < q; j++){
                if(strcmp(b[j], c) == 0){
                    bl[j]++;
                    fg = 1;
                }
            }
            if(fg == 0){
                strcpy(b[q], c);
				bl[q]++;
                q++;
            }
			memset(c, 0, 50);
            r = 0;
            fg = 0;
        }
    }
	memset(c, 0, 50);
    r = 0;
    for(int i = 0; i < q; i++){
        for(int j = i + 1; j < q; j++){
            if(strcmp(b[i], b[j]) > 0){
                strcpy(c, b[i]);
                strcpy(b[i], b[j]);
                strcpy(b[j], c);
                r = bl[i];
                bl[i] = bl[j];
                bl[j] = r;
            }
        }
    }
    for(int k = 0; k < q; k++)printf("%s %d\n", b[k], bl[k]);
    return 0;
}




//int main(){
//	char b[1000][50] = {'\0'};
//	char t[2] = {'\0'}, c[50], d[50];
//	int i = 0, k[1000], z = 0;
//	char A[30000] = {0};
//	fgets(A, 30000, stdin);
//	for(int q = 0 ; q < 1000; q++)k[q] = 1;
//	while(z < strlen(A)){
//		int n = 0;
//		while(A[z] != '\0' && A[z] != '\n' ){
//			if(A[z] == ' ')break;
//			b[i][n] = A[z];
//			n++;
//			z++;
//			if(z >= strlen(A))break;
//		}
//		int q = 0;
//		q = strcmp(b[i], b[i - 1]);  //q>0 b[i]较大   q<0 b[i]较小
//		char a[50];
//		int p = i;
//		while(q < 0){
//			int m = k[p];
//			k[p] = k[p - 1];
//			k[p - 1] = m;
//			memset(a, 0, 50);
//			strcpy(a, b[p]);
//			strcpy(b[p], b[p - 1]);
//			strcpy(b[p - 1], a);
//			p--;
//			q = strcmp(b[p], b[p - 1]);			
//		} 
//		if(q == 0 ){
//			i--;
//			k[p - 1]++;
//			for(int m = p; m <= i; m++){
//				k[m] = k[m + 1];
//				memset(b[m], 0, 50);
//				strcpy(b[m], b[m + 1]);
//			}
//			memset(b[i + 1], 0, 50);
//		}
//		i++;
//		z++;
//	}
//	for(int q = 0; q < i; q++)printf("%s %d\n", b[q], k[q]);
//	return 0; 
//}
