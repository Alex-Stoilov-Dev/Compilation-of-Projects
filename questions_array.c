#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	system("C:\\Windows\\System32\\chcp 1251 > null");  // Set the console to use Cyrillic encoding for Bulgarian characters.
	
	int exit = 0;  // This is used to control the loop exit condition
	
	do {
		char vuprosi[5][30];  // Array to store 5 questions, each with a maximum of 30 characters
		int i;
		int n;  // Variable to store the selected question index
		char vupros[20];  // To temporarily store a question input
		
		fflush(stdin);  // Clear the input buffer
		
		// Prompt the user to input 5 questions
		for (i = 0; i < 5; i++) {
			printf("Milya zadavaite vuprosite: ");  // "Please enter the question:"
			gets(vuprosi[i]);  // Read the question (unsafe, but typical in this case)
		}
		
		// Ask which question to display (1-5)
		printf("Koy vupros shte byde otpechatan? (1-5) : ");
		scanf("%d", &n);  // Input the number of the question to display
		while (n <=
