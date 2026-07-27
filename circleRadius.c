#include <stdio.h>
#include <math.h>

int main(){

    float circleRadius;
    float sphereRadius;
    const double PI = 3.14159; //const means constant/permanent. All const variables should be uppercase.
    float areaCircle;
    float surfaceSphere;
    float volumeSphere;


    printf("Enter the radius for your circle(in cm): ");
    scanf("%f", &circleRadius);
    printf("Enter the radius for your sphere(in cm): ");
    scanf("%f", &sphereRadius);

    areaCircle = PI*pow(circleRadius, 2);
    surfaceSphere = 4*PI*pow(sphereRadius, 2);
    volumeSphere = (4.0/3.0)*PI*pow(sphereRadius, 3);

    printf("\nThe area of your circle is: %.2lfcm2\nThe surface area of your sphere is: %.2lfcm2\nThe volume of your sphere is: %.2lfcm3\n", areaCircle, surfaceSphere, volumeSphere);

    return 0;
}