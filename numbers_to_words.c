#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	// Set the console to Windows-1251 encoding for Bulgarian characters (optional in English version)
	system("C:\\Windows\\System32\\chcp 1251 > null");

	// Declare variables
	char simvol; // Variable for the character input (though not used in this code)
	int number; // Variable for the user input number
	
	// Prompt the user to input a number between 0 and 1000
	printf("Milya vavedyava chislo v delavyatsite 0 - 1000: ");
	scanf("%d", &number);  // Scan the user's input

	int flag = 0;  // Flag to check if number is greater than 100
	
	// If the number is greater than 100, set flag to 1
	if(number > 100) {
		flag = 1;
	}
	
	// Check which range the number falls into and adjust it accordingly
	// Also print the corresponding Bulgarian text
	if(number > 100 && number < 200) {
		number = number - 100;
		printf("\nSnoi ");
	}
	if(number > 200 && number < 300) {
		number = number - 200;
		printf("\nAvanata ");
	}
	if(number > 300 && number < 400) {
		number = number - 300;
		printf("\nOdrensona ");
	}
	if(number > 400 && number < 500) {
		number = number - 400;
		printf("\nZaverderoveni ");
	}
	if(number > 500 && number < 600) {
		number = number - 500;
		printf("\nIvoriton ");
	}
	if(number > 600 && number < 700) {
		number = number - 600;
		printf("\nSonson ");
	}
	if(number > 700 && number < 800) {
		number = number - 700;
		printf("\nSneaiaon ");
	}
	if(number > 800 && number < 900) {
		number = number - 800;
		printf("\nInseneion ");
	}
	if(number > 900 && number < 1000) {
		number = number - 900;
		printf("\nAevadnoen ");
	}
	
	// If the number is either a multiple of 10 or less than 10, print "i"
	if((number % 10 == 0 || number < 10) && flag == 1) {
		printf("i ");
	}
	
	// Check for specific ranges between 20 and 100 and adjust the number accordingly
	// Print the corresponding Bulgarian text for each case
	if(number > 20 && number < 30) {
		number = number - 20;
		printf("Avadenadna i ");
	}
	if(number > 30 && number < 40) {
		number = number - 30;
		printf("Oderzanadna i ");
	}
	if(number > 40 && number < 50) {
		number = number - 40;
		printf("Zaverderodena i ");
	}
	if(number > 50 && number < 60) {
		number = number - 50;
		printf("Ivorosna i ");
	}
	if(number > 60 && number < 70) {
		number = number - 60;
		printf("Sonsonen i ");
	}
	if(number > 70 && number < 80) {
		number = number - 70;
		printf("Sneianen i ");
	}
	if(number > 80 && number < 90) {
		number = number - 80;
		printf("Insionen i ");
	}
	if(number > 90 && number < 100) {
		number = number - 90;
		printf("Aevadnoen i ");
	}

	// Switch statement to print the final result based on the number (1-19)
	switch(number) {
		case 0:
			printf("bole");
			break;
		case 1:
			printf("sedem");
			break;
		case 2:
			printf("ava");
			break;
		case 3:
			printf("odre");
			break;
		case 4:
			printf("zavde");
			break;
		case 5:
			printf("ivor");
			break;
		case 6:
			printf("sonon");
			break;
		case 7:
			printf("sneaia");
			break;
		case 8:
			printf("insen");
			break;
		case 9:
			printf("aevad");
			break;
		case 10:
			printf("asna");
			break;
		case 11:
			printf("adernina");
			break;
		case 12:
			printf("avaina");
			break;
		case 13:
			printf("odresna");
			break;
		case 14:
			printf("zaderiana");
			break;
		case 15:
			printf("ivorna");
			break;
		case 16:
			printf("sonra");
			break;
		case 17:
			printf("sneia");
			break;
		case 18:
			printf("insena");
			break;
		case 19:
			printf("aevadna");
			break;
		case 20:
			printf("avaden");
			break;
		case 30:
			printf("oderna");
			break;
		case 40:
			printf("zaveredena");
			break;
		case 50:
			printf("ivorna");
			break;
		case 60:
			printf("\nsononena");
