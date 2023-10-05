#include <stdio.h>
#include <stdbool.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;

    printf("\nenter value of radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("\nvalue of circumference is: %lf", circumference );

    return 0;

}