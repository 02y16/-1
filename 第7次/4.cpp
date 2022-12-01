#include <stdio.h>
#include <string.h>
int main(){
//	char c[] = "ÁãÒ¼·¡ÈþËÁÎéÂ½Æâ°Æ¾Á";
	int n0 = 0;
	scanf("%d", &n0);
	for(int i0 = 0; i0 < n0; i0++){
		char a[15] = {0};
		scanf("%s", a);
		int l0 = strlen(a), l = strlen(a), q = 0, w = 0;
		for(int i = 0; i < l0; i++){
			if(a[0] == '0' && l0 == 1){
				printf("Áã");
				break; 
			} 
			if(a[i] == '-'){
				printf("¸º");
				l--;
				continue;
			}
			if(l == 4 && w) printf("Íò");
			if(a[i] == '0'){
				q++;
				l--;
				continue;
			}
			if(a[i] < 58 && a[i] > 48){
				if(q){
					printf("Áã");
					q = 0;
				}
//				int t = (a[i] - 48) * 2;
//				printf("%c%c", c[t], c[t + 1]);
				if(a[i] == '1') printf("Ò¼");
				if(a[i] == '2') printf("·¡");
				if(a[i] == '3') printf("Èþ");
				if(a[i] == '4') printf("ËÁ");
				if(a[i] == '5') printf("Îé");
				if(a[i] == '6') printf("Â½");
				if(a[i] == '7') printf("Æâ");
				if(a[i] == '8') printf("°Æ");
				if(a[i] == '9') printf("¾Á");
				
				if(l == 2) printf("Ê°");
				if(l == 3) printf("°Û");
				if(l == 4) printf("Çª");
				if(l == 5) w = 1;
				if(l == 6){
					printf("Ê°");
					w = 1;
				}
				if(l == 7){
					printf("°Û");
					w = 1;
				}
				if(l == 8){
					printf("Çª");
					w = 1;
				}
				l--;
				continue;
			}
		}
		printf("Ô²\n");
	}
	return 0;
}
