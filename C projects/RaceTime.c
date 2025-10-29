#include <stdio.h>

int main(){

    float minutes, seconds;
    printf("Enter Race Minutes and Seconds: ");
    scanf("%f %f", &minutes, &seconds);

    float totalTime = minutes * 60 + seconds;
    float speedFps = 5280 / totalTime;
    float speedMps = speedFps / 3.282;

    printf("\n%.2f Speed FPS, %.2f Speed MPS", speedFps, speedMps);

    return 0;
}