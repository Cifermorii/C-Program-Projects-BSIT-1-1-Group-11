#include <stdio.h>

int main(){

    float rs;

    printf("Input richer scale to determine the damage: ");
    scanf("%f", &rs);

    if (rs <= 5 && rs >= 0){
        printf("LITTLE or NO DAMAGE");
    } else if (rs >= 5.0 && rs <= 5.5){
        printf("THERE ARE SOME DAMAGES");
    } else if (rs > 5.5 && rs <= 6.5){
        printf("THERE ARE SERIOUS DAMAGE!");
    } else if (rs > 6.5 && rs <= 7.5){
        printf("DISASTER: HOUSE AND BUILDING MAY COLLAPSE!");
    } else if (rs > 7.5){
        printf("CATASTROPHE!");
    } else {
        printf("Invalid Richter Scale");
    }

    return 0;
}