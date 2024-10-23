#include <stdio.h>

int main() {
    float price, total = 0.0;
    char choice;

    while (1) {
        //printf("Enter item price: ");
        scanf("%f", &price);
        total += price;

        //printf("Do you want to add another item? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume any leftover newline character

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    //printf("Total cost: %.2f\n", total);
    printf("%.2f", total);
    return 0;
}