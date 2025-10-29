#include <stdio.h>

int main(){

    float feet;

    printf("Please Input Feet Here: ");
    scanf("%f", &feet);

    float inches = feet * 12;
    float centimeters = inches * 2.54;
    float meters = centimeters / 100;

    printf("%.2f inch, %.2f centimeters, %.2f meters.", inches, centimeters, meters);

    return 0;
}