#include <stdio.h>
#include <math.h>

int main() {
    double radius, area, volume;

    // Ask the user for the radius of the sphere
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
    } else {
        // Calculate the area and volume
        area = 4 * M_PI * radius * radius;
        volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

        // Display the results
        printf("The surface area of the sphere is: %.2lf\n", area);
        printf("The volume of the sphere is: %.2lf\n", volume);
    }

    return 0;
}
