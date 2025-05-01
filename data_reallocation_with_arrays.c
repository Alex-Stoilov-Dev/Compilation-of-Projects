#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	system("C:\\Windows\\System32\\chcp 1251 > null");
	
	int reals[10];
	int negs = 0;
	int negativeNums[10];
	int i;
	
	for(i = 0; i < 10; i++){
		scanf("%d",&reals[i]);
	}
	
	printf("\nМасивът от реални числа е: ");
	for(i = 0; i < 10; i++){
		if(reals[i] < 0){
			negativeNums[negs++] = reals[i];
		}
		printf("%d ", reals[i]);
	}
	if(negs == 0){
		printf("\nВ масива няма въведени отрицателни числа");
	}
	else{
		printf("\nМасивът от отрицателни числа е: ");
		for(i = 0; i < negs; i++){
			printf("%d ", negativeNums[i]);
		}
	}
	
	return 0;
}
