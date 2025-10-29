#include <stdio.h>

int main(){

    int hrs, min;

    printf("Input Hours Here: ");
    scanf("%d", &hrs);

    min = hrs * 60;

    printf("\n%d Hours is %d in Minutes", hrs, min);

    return 0;
}