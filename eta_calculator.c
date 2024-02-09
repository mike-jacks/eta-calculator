#include <stdio.h>
#include <string.h>
#include <math.h>

float calculate_eta(int distance, int speed) {
    float eta;
    eta = (float)distance / speed;
    return eta;
}


int main() {
    int distance, speed;
    float eta;

    printf("Enter distance (in miles): ");
    scanf("%d", &distance);

    printf("Enter speed (in mph): ");
    scanf("%d", &speed);

    if (speed == 0) {
        printf("Speed cannot be zero.\n");
        return 1;
    }

    eta = calculate_eta(distance, speed);

    printf("Travel time: %.2f hours\n", eta);

    return 0;
}
