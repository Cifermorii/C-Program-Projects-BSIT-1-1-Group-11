#include <stdio.h>

int main(){

    float weight, height, BMI;

    printf("Input Weight in LB and Height in INCH: ");
    scanf("%f %f", &weight, &height);

    BMI = (weight / (height * height)) * 703;

    if (BMI < 18.5){
        printf("Your BMI is %.2f and you're Underweight", BMI);
    } else if (BMI >= 18.5 && BMI <= 24.9){
        printf("Your BMI is %.2f and you're Normal", BMI);
    } else if (BMI >= 25.0 && BMI <= 29.9){
        printf("Your BMI is %.2f and you're Overweight", BMI);
    } else if (BMI > 30.0){
        printf("Your BMI is %.2f and you're Obese", BMI);
    } else {
        printf("INVALID");
    }

    return 0;
}