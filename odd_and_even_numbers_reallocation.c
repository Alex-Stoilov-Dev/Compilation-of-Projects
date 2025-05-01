#include <stdio.h>
#include <stdlib.h>

int main() {

    // Declare a variable for user input to continue or stop the loop
    char simvol;

    // Start of the loop that allows multiple attempts
    do {

        // Set the console to use Windows-1251 encoding for Bulgarian characters
        system("C:\\Windows\\System32\\chcp 1251 > null");

        // Declare variables to store different results
        int i;
        int even = 0, odd = 0;
        int sum = 0;
        float average = 0;
        int product = 1;

        // Declare arrays to store numbers, even numbers, and odd numbers
        int masiv[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};   // Array for all numbers
        int masivEven[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Array for even numbers
        int masivOdd[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};  // Array for odd numbers

        // Get input from the user for the numbers
        for (i = 0; i < 10; i++) {
            printf("Milya vavedyava chislo za %d element ot masiva: ", i); // Prompt the user to enter a number
            scanf("%d", &masiv[i]);  // Store the input number in the array
        }

        // Initialize max and min to the first element of the array
        int max = masiv[0];
        int min = masiv[0];

        // Loop through the array to calculate sum, product, find max and min, and categorize even and odd numbers
        for (i = 0; i < 10; i++) {
            sum = sum + masiv[i];        // Calculate the sum of the numbers
            product = product * masiv[i]; // Calculate the product of the numbers
            if (max < masiv[i]) {        // Find the maximum number
                max = masiv[i];
            }
            if (min > masiv[i]) {        // Find the minimum number
                min = masiv[i];
            }
            if (masiv[i] % 2 == 0) {     // Check if the number is even
                masivEven[even++] = masiv[i]; // Store the even number in the even array
            }
            else {                       // If the number is odd
                masivOdd[odd++] = masiv[i];  // Store the odd number in the odd array
            }
        }

        // Print the even numbers
        printf("\nMasiv chetni: ");
        for (i = 0; i < even; i++) {
            printf("%d ", masivEven[i]);
        }

        // Print the odd numbers
        printf("\nMasiv nechetni: ");
        for (i = 0; i < odd; i++) {
            printf("%d ", masivOdd[i]);
        }

        // Calculate the average by dividing sum by the number of elements in the array
        average = (float)sum / (sizeof(masiv) / sizeof(int));

        // Display the results
        printf("\n\nSumata ot chisle ot masiva e: %d\n", sum);  // Print sum
        printf("Srednata aritmetichna na masiva: %.2f\n", average); // Print average
        printf("Proizvedenieto na chisle ot masiva e: %d\n", product); // Print product
        printf("Nai-minakoto chislo ot masiva e: %d\n", min); // Print min
        printf("Nai-golemiot chislo ot masiva e: %d", max); // Print max

        // Prompt user to continue or exit the program
        printf("\n\nAko iskate da produlzhite, napishete 'Q' ili 'q', za da izlezete -> Q ili q");
        scanf("%s", &simvol);  // Get the user input to either continue or exit

    } while (simvol != 'Q' && simvol != 'q'); // Continue if input is not 'Q' or 'q'

    return 0;  // End the program
}
