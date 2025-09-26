#include <stdio.h>

int main() {
    int distance;   // distance of the approaching vehicle
    int intensity;  // headlight intensity in percentage

    printf("=== Headlight Intensity Regulator ===\n");
    printf("Enter the distance of approaching vehicle (in meters): ");
    scanf("%d", &distance);

    // Check for invalid input
    if (distance <= 0) {
        printf("Invalid input! Distance must be greater than 0.\n");
    }
    else if (distance > 100) {
        intensity = 100;   // Full intensity
        printf("Distance: %d m\n", distance);
        printf("Headlight Intensity Set To: %d%%\n", intensity);
    }
    else if (distance >= 10 && distance <= 100) {
        intensity = distance; // Same as distance value (percentage)
        printf("Distance: %d m\n", distance);
        printf("Headlight Intensity Set To: %d%%\n", intensity);
    }
    else { 
        intensity = 10;    // Minimum intensity when vehicle is too close
        printf("Distance: %d m\n", distance);
        printf("Headlight Intensity Set To: %d%%\n", intensity);
    }

    return 0;
}