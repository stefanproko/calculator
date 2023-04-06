#include <stdio.h>

double squareArea(double a, double area) {
    area = a * a;
    return area;
}

double squarePerimeter(double a, double perimeter) {
    perimeter = 4 * a;
    return perimeter;
}

double circleArea(double r, double area) {
    area = 3.14159 * r * r;
    return area;
}
double circlePerimeter(double r, double perimeter) {
    perimeter = 2 * 3.14159 * r;
    return perimeter;
}

int main() {
    int choice;
    double a, r, area = 0.0, perimeter = 0.0;

    printf("Enter your choice:\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the side of square: ");
            scanf("%lf", &a);

            area = squareArea(a, area);
            perimeter = squarePerimeter(a, perimeter);


            printf("Area of the square: %.5lf\n", area);
            printf("Perimeter of the square: %.5lf\n", perimeter);
            break;

        case 2:
            printf("Enter the radius of circle: ");
            scanf("%lf", &r);

            area = circleArea(r, area);
            perimeter = circlePerimeter(r, perimeter);
            printf("Area of the circle: %.5lf\n", area);
            printf("Circumference of the circle: %.5lf\n", perimeter);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
