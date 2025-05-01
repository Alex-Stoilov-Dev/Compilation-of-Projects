#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    system("C:\\Windows\\System32\\chcp 1251 > null");  // Sets the console to use the Cyrillic encoding for Bulgarian characters.

    float a, b, c, Im_x1, Im_x2, Re_x1, Re_x2, descriminant;
    float i = -1 * -1;  // To calculate imaginary numbers, we use this approach for 'i' (imaginary unit)
    char exit;

    do {
        // Ask for input values for a, b, and c for the quadratic equation ax^2 + bx + c
        printf("Milya vavedyava chisla za a, b, c v kvadratno ravnenie ax^2 + bx + c\n");
        printf("Nay-dobre vavedete chislo za a: ");
        scanf("%f", &a);
        printf("Nay-dobre vavedete chislo za b: ");
        scanf("%f", &b);
        printf("Nay-dobre vavedete chislo za c: ");
        scanf("%f", &c);

        if (a != 0) {
            // Calculate the discriminant (D)
            descriminant = b * b - 4 * a * c;

            // Case 1: Discriminant is negative (complex roots)
            if (descriminant < 0) {
                printf("\nD = %.2f\n", descriminant);
                Re_x1 = (-b) / (2 * a);
                Im_x1 = i * fabs(sqrt(fabs(descriminant)) / (2 * a));
                Re_x2 = (-b) / (2 * a);
                Im_x2 = i * fabs(sqrt(fabs(descriminant)) / (2 * a));

                // Print the complex roots
                printf("Kompleksni koreni na ravnenieto:\nx1 = %.2f + i%.2f\nx2 = %.2f - i%.2f\n", Re_x1, Im_x1, Re_x2, Im_x2);
            }
            // Case 2: Discriminant is positive (real roots)
            else if (descriminant > 0) {
                printf("\nD = %.2f\n", descriminant);
                Re_x1 = (-b + sqrt(descriminant)) / (2 * a);
                Re_x2 = (-b - sqrt(descriminant)) / (2 * a);
                printf("Realni koreni na ravnenieto:\nx1 = %.2f\nx2 = %.2f\n", Re_x1, Re_x2);
            }
            // Case 3: Discriminant is zero (one real root)
            else {
                printf("\nD = %.2f\n", descriminant);
                Re_x1 = Re_x2 = -b / (2 * a);
                printf("Edinstven realen koren:\nx1 = x2 = %.2f\n", Re_x1);
            }
        }
        // Special cases: Linear equations and other cases
        else if (b != 0) {
            // Linear equation bx + c = 0
            Re_x1 = Re_x2 = -c / b;
            printf("Linearen koren: x = %.2f\n", Re_x1);
        }
        else if (c == 0) {
            // Special case for equation 0 = 0
            printf("Vseki x e reshenie (neopredelena sistema)\n");
        }
        else {
            // If no solution exists
            printf("Nyama reshenie\n");
        }

        // Ask user if they want to continue or exit
        printf("\nZa da produlzhite, napishte 'q' ili 'Q', za da izlezete -> [q/Q]: ");
        scanf(" %c", &exit);  // Notice the space before %c to consume the newline character

    } while (exit != 'q' && exit != 'Q');  // Exit loop if user presses 'q' or 'Q'

    return 0;
}
