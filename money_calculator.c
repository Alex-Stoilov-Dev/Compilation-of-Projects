#include <stdio.h>

int main() {

    // initializing the Bulgarian character set
    system("chcp 1251>null");

    // initializing variables
    int moneti1, moneti2, moneti5, moneti10, moneti20, moneti50, moneti100, moneti200;
    
    char simvol;

    // Make the program reusable, only quit with a specific key press at the end, rather than it being a single use only.
    do {
	
	        // user input for the number of coins the user has of each unique kind
	        printf("Vavedete broi na moneti po 1 stotinka: ");
	        scanf("%d", &moneti1);
	        printf("Vavedete broi na moneti po 2 stotinki: ");
	        scanf("%d", &moneti2);
	        printf("Vavedete broi na moneti po 5 stotinki: ");
	        scanf("%d", &moneti5);
	        printf("Vavedete broi na moneti po 10 stotinki: ");
	        scanf("%d", &moneti10);
	        printf("Vavedete broi na moneti po 20 stotinki: ");
	        scanf("%d", &moneti20);
	        printf("Vavedete broi na moneti po 50 stotinki: ");
	        scanf("%d", &moneti50);
	        printf("Vavedete broi na moneti po 1 lev: ");
	        scanf("%d", &moneti100);
	        printf("Vavedete broi na moneti po 2 leva: ");
	        scanf("%d", &moneti200);
	        
	        // Converting the number of coins to the value of said coins. 
	        // Categorize into white coins (10-50 cents) and yellow coins (1-5 cents) as well as a total sum
	        float sumaJulti = (moneti1 * 0.01) + (moneti2 * 0.02) + (moneti5 * 0.05);
	        float sumaBeli = (moneti10 * 0.1) + (moneti20 * 0.2) + (moneti50 * 0.5);
	        float obshtaSuma = sumaJulti + sumaBeli + moneti100 + (moneti200 * 2);
	
	        // Converting the total sum into an int in order to get just the whole part.
	        // To get the cents we multiply the total sum by 100 and trim the first number off.
	        int leva = obshtaSuma;
	        int stotinki = (obshtaSuma * 100);
	        stotinki = stotinki % 100;
	
	        // print the sums of all of the sets of coins as well as the paper money
	        printf("\nSuma ot julti moneti: %.2f leva.\n", sumaJulti);
	        printf("Suma ot beli moneti: %.2f leva.\n", sumaBeli);
	        printf("Obshata suma: %.2f leva.\n", obshtaSuma);
	        printf("Leva: %d leva.\n", leva);
	        printf("Stotinki: %d stotinki.\n", stotinki);
	
	        // initializing iterable variable
	        int i;
	
	        for (i = 0; i < 2; i++) {
	            int flag = 0;
	        
	            if (leva > 100) {
	                flag = 1;
	            }
	            if (leva > 100 && leva < 200) {
	                leva = leva - 100;
	                printf("\nsto ");
	            }
	            if (leva > 200 && leva < 300) {
	                leva = leva - 200;
	                printf("\nleva ");
	            }
	            if (leva > 300 && leva < 400) {
	                leva = leva - 300;
	                printf("\ntrista ");
	            }
	            if (leva > 400 && leva < 500) {
	                leva = leva - 400;
	                printf("\nchetirista ");
	            }
	            if (leva > 500 && leva < 600) {
	                leva = leva - 500;
	                printf("\npetsta ");
	            }
	            if (leva > 600 && leva < 700) {
	                leva = leva - 600;
	                printf("\nsheststa ");
	            }
	            if (leva > 700 && leva < 800) {
	                leva = leva - 700;
	                printf("\nsedemsta ");
	            }
	            if (leva > 800 && leva < 900) {
	                leva = leva - 800;
	                printf("\nosemsta ");
	            }
	            if (leva > 900 && leva < 1000) {
	                leva = leva - 900;
	                printf("\ndevetsta ");
	            }
	            
	            if ((leva % 10 == 0 || leva < 10) && flag == 1) {
	                printf("leva ");
	            }
	            if (leva > 20 && leva < 30) {
	                leva = leva - 20;
	                printf("dvadeset i ");
	            }
	            if (leva > 30 && leva < 40) {
	                leva = leva - 30;
	                printf("trideset i ");
	            }
	            if (leva > 40 && leva < 50) {
	                leva = leva - 40;
	                printf("chetirideset i ");
	            }
	            if (leva > 50 && leva < 60) {
	                leva = leva - 50;
	                printf("petdeset i ");
	            }
	            if (leva > 60 && leva < 70) {
	                leva = leva - 60;
	                printf("shestdeset i ");
	            }
	            if (leva > 70 && leva < 80) {
	                leva = leva - 70;
	                printf("sedemdeset i ");
	            }
	            if (leva > 80 && leva < 90) {
	                leva = leva - 80;
	                printf("osemdeset i ");
	            }
	            if (leva > 90 && leva < 100) {
	                leva = leva - 90;
	                printf("devetdeset i ");
	            }
		}
	            
	            switch (leva) {
	                case 0:
	                    printf("nul");
	                    break;
	                case 1:
	                    printf("edin");
	                    break;
	                case 2:
	                    printf("dva");
	                    break;
	                case 3:
	                    printf("tri");
	                    break;
	                case 4:
	                    printf("chetiri");
	                    break;
	                case 5:
	                    printf("pet");
	                    break;
	                case 6:
	                    printf("shest");
	                    break;
	                case 7:
	                    printf("sedem");
	                    break;
	                case 8:
	                    printf("osem");
	                    break;
	                case 9:
	                    printf("devet");
	                    break;
	                case 10:
	                    printf("deset");
	                    break;
	                case 11:
	                    printf("edinaeset");
	                    break;
	                case 12:
	                    printf("dvanadeset");
	                    break;
	                case 13:
	                    printf("trinadeset)
				break;
			case 14:
				printf("chetirinadeset");
				break;
			case 15:
				printf("petnadeset");
				break;
			case 16:
				printf("shestnadeset");
				break;
			case 17:
				printf("sedemnadeset");
				break;
			case 18:
				printf("osemnadeset");
				break;
			case 19:
				printf("devetnadeset");
				break;
			case 20:
				printf("dvadeset");
				break;
			case 30:
				printf("trideset");
				break;
			case 40:
				printf("chetirideset");
				break;
			case 50:
				printf("petdeset");
				break;
			case 60:
				printf("\nshestdeset");
				break;
			case 70:
				printf("\nsedemdeset");
				break;
			case 80:
				printf("\nosemdeset");
				break;
			case 90:
				printf("\ndevetdeset");
				break;
			case 100:
				printf("sto");
				break;
			case 200:
				printf("dvesta");
				break;
			case 300:
				printf("trista");
				break;
			case 400:
				printf("chetiristotin");
				break;
			case 500:
				printf("petstotin");
				break;
			case 600:
				printf("shestotin");
				break;
			case 700:
				printf("sedemstotin");
				break;
			case 800:
				printf("osemstotin");
				break;
			case 900:
				printf("devetstotin");
				break;
			case 1000:
				printf("hiljada");
				break;
			default:
				printf("Greshka! Molya vavedete chislo ot 0-1000!");
		}

		// Append the correct currency word based on whether it's the first or second loop pass
		if(i == 0) {
			if(leva == 1) {
				printf(" lev i ");
			} 
			else {
				printf(" leva i ");
			}
		}
		else {
			printf(" stotinki");
		}

		// Prepare for next iteration (from leva to stotinki)
		leva = stotinki;
		
		scanf("%s", simvol);  // Read user input into 'simvol'	
} while(simvol != 'Q' && simvol != 'q');  // Continue loop unless user entered 'Q' or 'q'
		
		return 0;
