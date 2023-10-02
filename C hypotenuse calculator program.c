#include <stdio.h>
#include <math.h>

int main(){
    double base;
    double height;
    double hypotenuse;

    printf("\nenter base value: ");
    scanf("%lf", &base);

    printf("\nenter height value: ");
    scanf("%lf", &height);

    hypotenuse = sqrt(pow(base, 2)+ pow(height, 2));

    printf("hypotenuse value: %lf", hypotenuse);

}