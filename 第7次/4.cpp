#include <stdio.h>
#include <string.h>
int main(){
//	char c[] = "��Ҽ��������½��ƾ�";
	int n0 = 0;
	scanf("%d", &n0);
	for(int i0 = 0; i0 < n0; i0++){
		char a[15] = {0};
		scanf("%s", a);
		int l0 = strlen(a), l = strlen(a), q = 0, w = 0;
		for(int i = 0; i < l0; i++){
			if(a[0] == '0' && l0 == 1){
				printf("��");
				break; 
			} 
			if(a[i] == '-'){
				printf("��");
				l--;
				continue;
			}
			if(l == 4 && w) printf("��");
			if(a[i] == '0'){
				q++;
				l--;
				continue;
			}
			if(a[i] < 58 && a[i] > 48){
				if(q){
					printf("��");
					q = 0;
				}
//				int t = (a[i] - 48) * 2;
//				printf("%c%c", c[t], c[t + 1]);
				if(a[i] == '1') printf("Ҽ");
				if(a[i] == '2') printf("��");
				if(a[i] == '3') printf("��");
				if(a[i] == '4') printf("��");
				if(a[i] == '5') printf("��");
				if(a[i] == '6') printf("½");
				if(a[i] == '7') printf("��");
				if(a[i] == '8') printf("��");
				if(a[i] == '9') printf("��");
				
				if(l == 2) printf("ʰ");
				if(l == 3) printf("��");
				if(l == 4) printf("Ǫ");
				if(l == 5) w = 1;
				if(l == 6){
					printf("ʰ");
					w = 1;
				}
				if(l == 7){
					printf("��");
					w = 1;
				}
				if(l == 8){
					printf("Ǫ");
					w = 1;
				}
				l--;
				continue;
			}
		}
		printf("Բ\n");
	}
	return 0;
}
