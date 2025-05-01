#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char simvol;
	
	do{

			system("C:\\Windows\\System32\\chcp 1251 > null");
			int i;
			int even = 0, odd = 0;
			int	sum = 0;
			float average = 0;
			int product = 1;
			
			
			int masiv[10] = {0,0,0,0,0,0,0,0,0,0};
			int masivEven[10] = {0,0,0,0,0,0,0,0,0,0};
			int masivOdd[10] = {0,0,0,0,0,0,0,0,0,0};
		
				
			
			for (i = 0; i<10; i++){
				printf("Моля въведете стойност за %d елемент от масив: ", i);
				scanf("%d", &masiv[i]);
			}
			
			int max = masiv[0];
			int min = masiv[0];
			
			for(i = 0; i < 10; i++){
				sum=sum+masiv[i];
				product=product*masiv[i];
				if(max<masiv[i]){
					max = masiv[i];
				}
				if(min>masiv[i]){
					min = masiv[i];
				}
				if(masiv[i] % 2 == 0){
					masivEven[even++] = masiv[i];
				}
				else{
					masivOdd[odd++] = masiv[i];
				}
				
			}
		
			printf("\nМасив четни: ");
		    for(i = 0; i < even; i++) {
		        printf("%d ", masivEven[i]);
		    }
		
		    printf("\nМасив нечетни: ");
		    for(i = 0; i < odd; i++) {
		        printf("%d ", masivOdd[i]);
		    }
		
		
			average = (float)sum/(sizeof(masiv)/sizeof(int));
		
			printf("\n\nСумата от числата е: %d\n", sum);	
			printf("Средноаритметияното на масива: %.2f\n", average);
			printf("Произведението на числата от масива е: %d\n", product);
			printf("Най-малкото число от масива е: %d\n", min);
			printf("Най-голямото число от масива е: %d", max);
		printf("\n\nАко искате да излезете от програмата натиснете -> Q или q");
		scanf("%s", &simvol);
	}
	while(simvol != 'Q' && simvol !='q');

	return 0;
}
