///C program to calculate the area and perimeter of rectangle.

#include <stdio.h>

int main()
{
    float length;
    float breadth;
    float area;
    float perimeter;

    ///length input
    printf("Enter the length: ");
    scanf("%f", &length);

    ///breadth input

    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    ///Calculating the area and rectangle

    area = length * breadth;
    perimeter = (2 * length) + (2 * breadth);

    ///printing the result

    printf("Area of the rectangle: %.02f\n", area);
    printf("Perimeter of rectangle: %.02f\n", perimeter);

    return 0;

}
