#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	system("C:\\Windows\\System32\\chcp 1251 > null");


	//Initiate variables
	int reals[10];
	int negs = 0;
	int negativeNums[10];
	int i;

	//User input into array
	for(i = 0; i < 10; i++){
		scanf("%d",&reals[i]);
	}

	//checks if numbers in the "reals" array are less than zero, if so it moves them to the negativeNums array
	printf("\nÌàñèâúò îò ðåàëíè ÷èñëà å: ");
	for(i = 0; i < 10; i++){
		if(reals[i] < 0){
			negativeNums[negs++] = reals[i];
		}
		printf("%d ", reals[i]);
	}
	//checks if the array is empty, and it prints that to the screen or prints the array 
	if(negs == 0){
		printf("\nÂ ìàñèâà íÿìà âúâåäåíè îòðèöàòåëíè ÷èñëà");
	}
	else{
		printf("\nÌàñèâúò îò îòðèöàòåëíè ÷èñëà å: ");
		for(i = 0; i < negs; i++){
			printf("%d ", negativeNums[i]);
		}
	}
	
	return 0;
}
