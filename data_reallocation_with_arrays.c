#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	// Set the console to Windows-1251 encoding for Bulgarian characters (optional in English version)
	system("C:\\Windows\\System32\\chcp 1251 > null");

	// Initialize arrays and counters
	int reals[10];             // Array to store 10 integer inputs
	int negs = 0;              // Counter for number of negative values
	int negativeNums[10];     // Array to store only negative numbers
	int i;

	// Read 10 numbers from the user and store them in 'reals' array
	for(i = 0; i < 10; i++) {
		scanf("%d", &reals[i]);
	}

	// Print the original array and extract negative values
	printf("\nMasivut ot realni chisla e: ");
	for(i = 0; i < 10; i++) {
		if(reals[i] < 0) {
			// Store negative numbers in separate array
			negativeNums[negs++] = reals[i];
		}
		printf("%d ", reals[i]);  // Print each number
	}

	// Check if any negative numbers were found
	if(negs == 0) {
		printf("\nV masiva nyama vavedeni otricatelni chisla");
	} else {
		printf("\nMasivut ot otricatelni chisla e: ");
		// Print the array of negative numbers
		for(i = 0; i < negs; i++) {
			printf("%d ", negativeNums[i]);
		}
	}
	
	return 0;
}
