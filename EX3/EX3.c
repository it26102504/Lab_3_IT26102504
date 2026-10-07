#include <stdio.h>

int main(void)
{
    double area, height, base;
    double value, guess;

    printf("Enter the area of the sail (m^2): ");
    scanf("%lf", &area);

    value = 3 * area;
    guess = value / 2;

    // Find square root using iteration
    for (int i = 0; i < 10; i++)
    {
        guess = (guess + value / guess) / 2;
    }

    height = guess;
    base = (2.0 / 3.0) * height;

    printf("Height of the sail = %.2f m\n", height);
    printf("Base of the sail = %.2f m\n", base);

    return 0;
}
