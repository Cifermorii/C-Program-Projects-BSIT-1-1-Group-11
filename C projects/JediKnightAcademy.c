#include <stdio.h>

int main(){

    char name[50];
    int height, age, citiCode, recoCode; 

    printf("Enter Your Name: ");
    scanf("%s", &name);

    printf("Input Your Height in cm: ");
    scanf("%d", &height);

    printf("Input Your Age: ");
    scanf("%d", &age);

    printf("Are you from Planet Endor? ");
    printf("1 for Yes, 0 for No \n");
    scanf("%d", &citiCode);

    printf("Are You Recommended by Jedi Master Obi Wan? ");
    printf("1 for Yes, 0 for No \n");
    scanf("%d", &recoCode);

    if (recoCode == 1){
        printf("%s is ACCEPTED\n", name);
    } else if (height >= 200 && age >= 21 && age <= 25 && citiCode == 1){
        printf("%s is ACCEPTED\n", name);
    } else {
        printf("%s is REJECTED\n", name);
    }

    return 0;
}