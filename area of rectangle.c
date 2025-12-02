#include <stdio.h>
int main() {
    float base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    area = 0.5*height * base;
    printf("The area of the triangle =%f", area);
return 0;
}

