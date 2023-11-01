#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, side3;
    double perimeter, area, s;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    // Calculate the perimeter
    perimeter = side1 + side2 + side3;

    // Calculate the semi-perimeter for area calculation
    s = perimeter / 2;

    // Use Heron's formula to calculate the area
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    printf("Perimeter of the triangle is: %.2lf\n", perimeter);
    printf("Area of the triangle is: %.2lf\n", area);

    return 0;
}
