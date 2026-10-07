#include <stdio.h>

int main()
{
    double speed_kmh, speed_ms;
    double distance, acceleration, time;

    // Get inputs
    printf("Enter takeoff speed (km/hr): ");
    scanf("%lf", &speed_kmh);

    printf("Enter catapult distance (m): ");
    scanf("%lf", &distance);

    // Convert speed from km/hr to m/s
    speed_ms = speed_kmh * 1000 / 3600;

    // Calculate acceleration
    // From s = 1/2 at^2 and v = at:
    // s = 1/2 vt
    // t = 2s/v
    time = (2 * distance) / speed_ms;

    // Calculate acceleration using v = at
    acceleration = speed_ms / time;

    // Display results
    printf("\nAcceleration = %.2f m/s^2\n", acceleration);
    printf("Time = %.2f seconds\n", time);

    return 0;
}
