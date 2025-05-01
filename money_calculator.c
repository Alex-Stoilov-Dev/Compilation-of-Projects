#include <stdio.h>

int main() {
	    
	system("chcp 1251>null");
	
	int moneti1, moneti2,moneti5 ,moneti10,moneti20,moneti50,moneti100,moneti200;
	
	char simvol;
	
	do{
	
	printf("Въведете броя на монетите по 1 ст.:");
	scanf("%d",&moneti1);
	printf("Въведете броя на монетите по 2 ст.:");
	scanf("%d",&moneti2);
	printf("Въведете броя на монетите по 5 ст.:");
	scanf("%d",&moneti5);
	printf("Въведете броя на монетите по 10 ст.:");
	scanf("%d",&moneti10);
	printf("Въведете броя на монетите по 20 ст.:");
	scanf("%d",&moneti20);
	printf("Въведете броя на монетите по 50 ст.:");
	scanf("%d",&moneti50);
	printf("Въведете броя на монетите по 1 лв.:");
	scanf("%d",&moneti100);
	printf("Въведете броя на монетите по 2 лв.:");
	scanf("%d",&moneti200);
	
	
	float sumaJulti= (moneti1 * 0.01) + (moneti2 * 0.02) + (moneti5 * 0.05);
	float sumaBeli= (moneti10 * 0.1) + (moneti20 * 0.2) + (moneti50 * 0.5);
	float obshtaSuma= sumaJulti + sumaBeli + moneti100 + (moneti200 * 2);
	
	int leva = obshtaSuma;
	int stotinki = (obshtaSuma * 100);
	stotinki = stotinki%100;
	
	printf("\nСумата на жълтите монети: %.2f лв.\n", sumaJulti);
	printf("Сумата на бели монети: %.2f лв.\n", sumaBeli);
	printf("Обща сума: %.2f лв.\n", obshtaSuma);
	printf("Левовете са: %d лв.\n", leva);
	printf("Стотинките са: %d ст.\n", stotinki);

	int i;

	for (i = 0; i<2 ; i++){
		int flag = 0;
	
		if( leva> 100){
			flag = 1;
		}
		if(leva > 100 && leva < 200){
			leva = leva - 100;
			printf("\nсто ");
		}
		if(leva > 200 && leva < 300){
			leva = leva - 200;
			printf("\nдвеста ");
		}
		if(leva > 300 && leva < 400){
			leva = leva - 300;
			printf("\nтриста ");
		}
		if(leva > 400 && leva < 500){
			leva = leva - 400;
			printf("\nчетиристотин ");
		}
		if(leva > 500 && leva < 600){
			leva = leva - 500;
			printf("\nпетстотин ");
		}
		if(leva > 600 && leva < 700){
			leva = leva - 600;
			printf("\nшестотин ");
		}
		if(leva > 700 && leva < 800){
			leva = leva - 700;
			printf("\nседемстотин ");
		}
		if(leva > 800 && leva < 900){
			leva = leva - 800;
			printf("\nосемстотин ");
		}
		if(leva > 900 && leva < 1000){
			leva = leva - 900;
			printf("\nдеветстотин ");
		}
		
		if( (leva % 10 == 0 || leva < 10) && flag == 1){
			printf("и ");
		}
		if(leva > 20 && leva < 30){
			leva = leva - 20;
			printf("двадесет и ");
		}
		if(leva > 30 && leva < 40){
			leva = leva - 30;
			printf("тридесет и ");
		}
		if(leva > 40 && leva < 50){
			leva = leva - 40;
			printf("четиридесет и ");
		}
		if(leva > 50 && leva < 60){
			leva = leva - 50;
			printf("петдесет и ");
		}
		if(leva > 60 && leva < 70){
			leva = leva - 60;
			printf("шестдесет и ");
		}
		if(leva > 70 && leva < 80){
			leva = leva - 70;
			printf("Седемдесет и ");
		}
		if(leva > 80 && leva < 90){
			leva = leva - 80;
			printf("осемдесет и ");
		}if(leva > 90 && leva < 100){
			leva = leva - 90;
			printf("деветдесет и ");
		}
		
		switch(leva){
			case 0:
				printf("нула");
				break;
			case 1:
				printf("един");
				break;
			case 2:
				printf("два");
				break;
			case 3:
				printf("три");
				break;
			case 4:
				printf("четири");
				break;
			case 5:
				printf("пет");
				break;
			case 6:
				printf("шест");
				break;
			case 7:
				printf("седем");
				break;
			case 8:
				printf("осем");
				break;
			case 9:
				printf("девет");
				break;
			case 10:
				printf("десет");
				break;
			case 11:
				printf("едининадесет");
				break;
			case 12:
				printf("дванадесет");
				break;
			case 13:
				printf("тринадесет");
				break;
			case 14:
				printf("четиринадесет");
				break;
			case 15:
				printf("петнадесет");
				break;
			case 16:
				printf("шестнадесет");
				break;
			case 17:
				printf("седемнадесет");
				break;
			case 18:
				printf("осемнадесет");
				break;
			case 19:
				printf("деветнадесет");
				break;
			case 20:
				printf("двадесет");
				break;
			case 30:
				printf("тридесет");
				break;
			case 40:
				printf("четиридесет");
				break;
			case 50:
				printf("петдесет");
				break;
			case 60:
				printf("\nшестдесет");
				break;
			case 70:
				printf("\nседемдесет");
				break;
			case 80:
				printf("\nосемдесет");
				break;
			case 90:
				printf("\nдеветдесет");
				break;
			case 100:
				printf("сто");
				break;
			case 200:
				printf("двеста");
				break;
			case 300:
				printf("триста");
				break;
			case 400:
				printf("четиристотин");
				break;
			case 500:
				printf("петстотин");
				break;
			case 600:
				printf("шестотин");
				break;
			case 700:
				printf("седемстотин");
				break;
			case 800:
				printf("осемстотин");
				break;
			case 900:
				printf("деветстотин");
				break;
			case 1000:
				printf("хиляда");
				break;
			default:
				printf("Грешка! Моля въведете число от 0-1000! ");
		}
		if(i == 0 ){
			if(leva == 1){
				printf(" лев и ");
			}
			else{
				printf(" лева и ");
			}
		}
		else{
			printf(" стотинки");
		}
		leva = stotinki;
	}
	printf("\n\nАко искате да излезете от програмата натиснете -> Q или q");
	scanf("%s", simvol);
}while(simvol != 'Q' && simvol != 'q');
	
	return 0; 
}
