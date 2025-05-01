#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	system("C:\\Windows\\System32\\chcp 1251 > null");
/*
	int ch1, ch2, ch3, poGolqmo, poMalko;
	
	printf("Моля въведете стойност за число 1: ");
	scanf("%d",&ch1);
	printf("Моля въведете стойност за число 2: ");
	scanf("%d",&ch2);
	printf("Моля въведете стойност за число 3: ");
	scanf("%d",&ch3);
		
	if(ch1 == ch2 && ch2 == ch3){
	 
		printf("\nЧислата са равни: %d = %d = %d", ch1, ch2, ch3);
		exit(0);
	}
	if (ch1 > ch2){
		poGolqmo = ch1;
		poMalko = ch2;
	}
	else{ 
		poGolqmo = ch2;
		poMalko = ch1;	
	}
	
	if (poGolqmo < ch3){
		poGolqmo = ch3;
	}
	if(ch3 < poMalko){
		poMalko = ch3;
	}
	printf("\nНай-голямото от 3те числа е: %d", poGolqmo);
	printf("\nНай-малкото число е: %d", poMalko);
	*/
	float a,b,c, Im_x1, Im_x2, Re_x1, Re_x2,descriminant;
	float i = -1*-1;
	char exit;
	do{
	printf("Моля въведете стойности за a b c в уравнението ax^2 + bx + c");
	printf("\n\nСтойност за а: ");
	scanf("%f",&a);
	printf("Стойност за b: ");
	scanf("%f",&b);
	printf("Стойност за c: ");
	scanf("%f",&c);
		
	if(a != 0 && b != 0 && c != 0){
		descriminant = b*b - 4*a *c;
			
		if(descriminant < 0){
			printf("\nD = %.2f\n", descriminant);
			Re_x1 = (-b)/(2*a);
			Im_x1 = i*fabs((sqrt(fabs(descriminant)))/(2*a));
			Re_x2 = (-b)/(2*a);
			Im_x2 = i*fabs((sqrt(fabs(descriminant)))/(2*a));
			
			if (Im_x1 != 1 && Im_x2 != 1){
				printf("\nКомплексните Корени са: \nx1 = %.2f+i%.2f \nx2 = %.2f-i%.2f", Re_x1, Im_x1, Re_x2, Im_x2);

			}
			else if (Im_x1 == 1 && Im_x2 == 1){
				printf("Комплексните Корени са: \nx1= %.2f+i \nx2= %.2f-i", Re_x1, Re_x2);
			}
			else if (Im_x2 == 1){
				printf("Комплексните Корени са: \nx1= %.2f+i%.2f \nx2= %.2f-i", Re_x1, Im_x1, Re_x2);
			}
			else if (Im_x1 == 1){
				printf("Комплексните Корени са: \nx1= %.2f+i \nx2= %.2f-i%.2f", Re_x1, Re_x2, Im_x2);
			}
		}
		else if (descriminant > 0){	
			printf("\nДискриминантата е: %.2f\n", descriminant);
			Re_x1 = (-b+sqrt(descriminant))/(2*a);
			Re_x2 = (-b-sqrt(descriminant))/(2*a);
			printf("Стойностите за х1 и х2 са: \nx1 = %.2f \nx2 = %.2f", Re_x1,Re_x2);
		}
		else {
			printf("\nНямаме дискриминанта в този случай", descriminant);
			Re_x1 = Re_x2 = -b/2*a;
			if(Re_x1 != 0){
			printf("\n x1 = x2 = %.2f", Re_x1);
			}
		}
			}
	if(b != c && b == a){
		printf("\nНяма решение");
	}
	if(b != 0 && c != 0 && a == 0 ){
		Re_x1 = Re_x2 = -c/b;
		printf("\nx = %.2f",Re_x1);
	}
	if(a == b && b == c && c == 0){
		printf("\nВсяко Х е решение");

	}
	if(c == 0 && a != 0 && b != 0){
		Re_x1 = 0;
		Re_x2 = -b/a;
		printf("\nx1 = 0 \nx2 = %.2f", Re_x2);
	}
	if (a != 0 && c != 0 && b == 0){
		if(-c/a < 0){
			Re_x1 = Re_x2 = sqrt(c/a);
			printf("x1,2 = +-i%.2f", Re_x1);
		} 
		else{
			Re_x1 = Re_x2 = sqrt(-c/a);
			printf("x1,2 = +-%.2f", Re_x1);
		}
	}
	if((a == 0 && c == 0 && b != 0) || (b == 0 && c == 0 && a != 0)){
		printf("\nx = 0");
		}
	}
	
	printf("\n\nАко искате да излезете, натиснете -> [q/Q]");
	scanf("%s",&exit);
}	
	while(exit != 'q' && exit != 'Q');
	
return 0;
}
