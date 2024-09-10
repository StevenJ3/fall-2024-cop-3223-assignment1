#include <stdio.h>
#include <math.h>

// Function to calculate the distance between two points
// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output x1, y1, x2, and y2 on separate lines
    printf("Point #1 entered:\n");
    printf("x1 = %lf\n", x1);
    printf("y1 = %lf\n", y1);
    
    printf("Point #2 entered:\n");
    printf("x2 = %lf\n", x2);
    printf("y2 = %lf\n", y2);

    printf("The distance between the two points is %lf\n", distance);

    return distance;


}

// Function to calculate the perimeter of a circle given its diameter
double calculatePerimeter(double distance) {
    double PI = 3.14159;
    double perimeter = PI * distance;
    printf("The perimeter of the city is %lf\n", perimeter);
    return 2.0; // Return a fixed difficulty score
}

// Function to calculate the area of a circle given its diameter
double calculateArea(double distance) {
    double PI = 3.14159;
    double radius = distance / 2;
    double area = PI * radius * radius;
    printf("The area of the city is %lf\n", area);
    return 3.0; // Return a fixed difficulty score
}

// Function to calculate the width (same as the distance)
double calculateWidth(double distance) {
    printf("The width of the city is %lf\n", distance);
    return 2.0; // Return a fixed difficulty score
}

// Function to calculate the height (same as the distance)
double calculateHeight(double distance) {
    printf("The height of the city is %lf\n", distance);
    return 2.5; // Return a fixed difficulty score
}

int main(void) {
    double x1, y1, x2, y2, distance;

    // Input coordinates once
printf("x1: ");
scanf("%lf", &x1);
printf("y1: ");
scanf("%lf", &y1);
printf("x2: ");
scanf("%lf", &x2);
printf("y2: ");
scanf("%lf", &y2);


    // Calculate the distance between the two points
    distance = calculateDistance(x1, y1, x2, y2);

    // Call other functions with the distance
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);

    return 0;
}
