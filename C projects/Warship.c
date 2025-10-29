#include <stdio.h>

int main(){

    char classId;

    printf("Input War Ship Class Id: ");
    scanf("%c", &classId);

    switch (classId) {

        case 'B':
        case 'b':
            printf("Class Type: Battleship");
            break;

        case 'C':
        case 'c':
            printf("Class Type: Cruiser");
            break;

        case 'D':
        case 'd':
            printf("Class Type: Destroyer");
            break;
        case 'F':
        case 'f':
            printf("Class Type: Trigate");
            break;

        default:
            printf("Not a War Ship");
            break;
    }

    return 0;
}