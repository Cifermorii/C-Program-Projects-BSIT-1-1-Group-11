#include <stdio.h>

int main(){

    char name[50];
    int answer1, answer2, answer3, answer4, answer5;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0;
    float sum = 0.0;
    float ave = 0.0;

    printf("Enter your student name: ");
    scanf("%s", name);

    printf("What's your answer for #1? ");
    scanf(" %d", &answer1);

    switch (answer1){
        case 1:
            point1 += 1;
            break;
        case 2:
            point2 += 2;
            break;
        case 3:
            point3 += 3;
            break;
        case 4:
            point4 += 4;
            break;
        case 5:
            point5 += 5;
            break;
        default:
            printf("Out of Range");
            scanf("%d", &answer1);
    }

    printf("What's your answer for #2? ");
    scanf(" %d", &answer2);

    switch (answer2){
        case 1:
            point1 += 1;
            break;
        case 2:
            point2 += 2;
            break;
        case 3:
            point3 += 3;
            break;
        case 4:
            point4 += 4;
            break;
        case 5:
            point5 += 5;
            break;
        default:
            printf("Out of Range");
            scanf("%d", &answer2);
    }

    printf("What's your answer for #3? ");
    scanf(" %d", &answer3);

    switch (answer3){
        case 1:
            point1 += 1;
            break;
        case 2:
            point2 += 2;
            break;
        case 3:
            point3 += 3;
            break;
        case 4:
            point4 += 4;
            break;
        case 5:
            point5 += 5;
            break;
        default:
            printf("Out of Range");
            scanf("%d", &answer3);
    }

    printf("What's your answer for #4? ");
    scanf(" %d", &answer4);

    switch (answer4){
        case 1:
            point1 += 1;
            break;
        case 2:
            point2 += 2;
            break;
        case 3:
            point3 += 3;
            break;
        case 4:
            point4 += 4;
            break;
        case 5:
            point5 += 5;
            break;
        default:
            printf("Out of Range");
            scanf("%d", &answer4);
    }

    printf("What's your answer for #5? ");
    scanf(" %d", &answer5);

    switch (answer5){
        case 1:
            point1 += 1;
            break;
        case 2:
            point2 += 2;
            break;
        case 3:
            point3 += 3;
            break;
        case 4:
            point4 += 4;
            break;
        case 5:
            point5 += 5;
            break;
        default:
            printf("Out of Range");
            scanf("%d", &answer5);
    }


    sum = point1 + point2 + point3 + point4 + point5;   
    ave = sum / 5.0;

    printf("%s, your score is %.1f and your average score is %.1f\n", name, sum, ave);

    return 0;
}