#include <stdio.h>

int main() {
    int speed;
    
    printf("Enter the speed of vehicle in (km/h): ");
    scanf("%d", &speed);
    
    if (speed >= 0 && speed <= 20) {
        printf("Too slow, unsafe for highways.\n");
    }
    else if (speed >= 21 && speed <= 40) {
        printf("Below Normal Speed.\n");
    }
    else if (speed >= 41 && speed <= 80) {
        printf("Safe Driving, keep it up.\n");
    }
    else if (speed >= 81 && speed <= 100) {
        printf("High speed, drive safe.\n");
    }
    else if (speed >= 101 && speed <= 120) {
        printf("Overspeeding, can be dangerous.\n");
    }
    else {
        printf("Invalid input.\n");
    }
    
    return 0;
}
