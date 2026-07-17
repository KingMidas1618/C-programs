#include <stdio.h>
#include <math.h>

int main(){

    float radius;
    const double PI = 3.14159; //const means constant/permanent. All const variables should be uppercase.
    float areaCircle;
    float surfaceSphere;
    float volumeSphere;


    printf("Enter the radius for your circle and sphere (in cm): ");
    scanf("%f", &radius);

    areaCircle = PI*pow(radius, 2);
    surfaceSphere = 4*PI*pow(radius, 2);
    volumeSphere = (4.0/3.0)*PI*pow(radius, 3);

    printf("The area of your circle is: %.2lfcm2\nThe surface area of your sphere is: %.2lfcm2\nThe volume of your sphere is: %.2lfcm3\n", areaCircle, surfaceSphere, volumeSphere);

    return 0;
}