#include <stdio.h>

int main()
{
    const float Pi = 3.14;
    float radius = 15.5, circumference = 2 * Pi * radius, area = Pi * radius * radius;

    printf("Ban kinh hinh tron: %.2f\n", radius);
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;

}