#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	system("C:\\Windows\\System32\\chcp 1251 > null");
	char simvol;
	
	int number;
	
	
	printf("Моля въведете число в диапазон 0 - 1000: ");
	scanf("%d", &number);
	
	int flag = 0;
	
		if(number > 100){
			flag = 1;
		}
	
		if(number > 100 && number < 200){
			number = number - 100;
			printf("\nсто ");
		}
		if(number > 200 && number < 300){
			number = number - 200;
			printf("\nдвеста ");
		}
		if(number > 300 && number < 400){
			number = number - 300;
			printf("\nтриста ");
		}
		if(number > 400 && number < 500){
			number = number - 400;
			printf("\nчетиристотин ");
		}
		if(number > 500 && number < 600){
			number = number - 500;
			printf("\nпетстотин ");
		}
		if(number > 600 && number < 700){
			number = number - 600;
			printf("\nшестотин ");
		}
		if(number > 700 && number < 800){
			number = number - 700;
			printf("\nседемстотин ");
		}
		if(number > 800 && number < 900){
			number = number - 800;
			printf("\nосемстотин ");
		}
		if(number > 900 && number < 1000){
			number = number - 900;
			printf("\nдеветстотин ");
		}
		
		if( (number % 10 == 0 || number < 10) && flag == 1){
			printf("и ");
		}
		if(number > 20 && number < 30){
			number = number - 20;
			printf("двадесет и ");
		}
		if(number > 30 && number < 40){
			number = number - 30;
			printf("тридесет и ");
		}
		if(number > 40 && number < 50){
			number = number - 40;
			printf("четиридесет и ");
		}
		if(number > 50 && number < 60){
			number = number - 50;
			printf("петдесет и ");
		}
		if(number > 60 && number < 70){
			number = number - 60;
			printf("шестдесет и ");
		}
		if(number > 70 && number < 80){
			number = number - 70;
			printf("Седемдесет и ");
		}
		if(number > 80 && number < 90){
			number = number - 80;
			printf("осемдесет и ");
		}if(number > 90 && number < 100){
			number = number - 90;
			printf("деветдесет и ");
		}
		
	switch(number){
		case 0:
			printf("нула");
			break;
		case 1:
			printf("едно");
			break;
		case 2:
			printf("две");
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
			printf("Грешка! Моля въведете число от 0-1000!");
	}

	return 0;
}
