#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = 'P';
    float total = 0.0f;

    printf("Enter your desired item: ", item[50]);
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0;

    printf("What is the price of each? ", price);
    scanf("%f", &price);

    printf("How many would you like to buy? ", quantity);
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYour Item is %s \nPrice: %c.%.2f \nQuantity: %d", item, currency, total, quantity);
    return 0;
}
