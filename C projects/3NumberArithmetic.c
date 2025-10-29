#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2, num3, sum, diff, prod, ave, ss;
    
    printf("\nInput 3 numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    diff = num1 - num2 - num3;
    prod = num1 * num2 * num3;
    ave = sum / 3;
    ss = pow(num1, 2) + pow(num2, 2) + pow(num3, 2);

    printf("Sum: %.2f, Difference: %.2f, Product: %.2f, Average: %.2f, Sum-Squared: %.2f", sum, diff, prod, ave, ss);

    return 0;
}