#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	system("C:\\Windows\\System32\\chcp 1251 > null");
	
	int exit = 0;
	
	do{
		char vuprosi[5][30];
		int i;
		int n;
		char vupros[20];
		
		fflush(stdin);
		
		for (i = 0; i<5; i++){
			printf("Моля задайте вашите въпроси: ");
			gets(vuprosi[i]);
		}
		
		printf("Кой въпрос желаете да видите? (1-5) : ");
		scanf("%d", &n);
		while(n <= 0 || n > 5){
			printf("Моля изберете въпрос в диапазона 1-5 ");
			scanf("%d", &n);
		}
	
		n = n - 1;
		
		printf("Въпросът, който зададохте е: \n\n");		
		
		puts(vuprosi[n]);
		
		printf("\nAко искате да прекратите програмате, моля въведете отрицателно число: ");
		scanf("%d", &exit);
		printf("\n");
	}while(exit >= 0);
	
	system("PAUSE");
	
	return 0;
}
