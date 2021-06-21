
///Calculate the distance in meter, feet,inches and centimeter.

#include <stdio.h>

int main()
{

    int distance;
    float meter;
    float feet;
    float inches;
    float centimeter;

    ///input the value of distance through the keyboard.

    printf("Enter the distance between Gwalior and Delhi (in KM): ");
    scanf("%d", &distance);

    meter = distance * 1000;
    feet = distance * 3280.84;
    inches = distance * 39370.1;
    centimeter = distance * 100000;

    printf("Meter = %f\n", meter);
    printf("Feet = %f\n", feet);
    printf("Inches = %f\n", inches);
    printf("Centimeters = %f\n", centimeter);

    return 0;

}
