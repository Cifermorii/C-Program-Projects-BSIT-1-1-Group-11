#include <stdio.h>

int main(){

    char choice;
    int hours;
    float amount;

    printf("C for Car, B for Bus, T for Truck");
    printf("\n Please input what type of vehicle you have: ");
    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c' || choice == 'B' || choice == 'b' || choice == 'T' || choice == 't'){

        printf("Input amount of hours in parking lot: ");
        scanf("%d", &hours);

        if (choice == 'C' || choice == 'c'){
            amount = 25.00 * hours;
        } else if (choice == 'B' || choice == 'b'){
            amount = 50.00 * hours;
        } else {
            amount = 75.00 * hours;
        }

        printf("That'll be P%.2f", amount);
    } else {
        printf("Invalid Vehicle");
    }

    return 0;
}