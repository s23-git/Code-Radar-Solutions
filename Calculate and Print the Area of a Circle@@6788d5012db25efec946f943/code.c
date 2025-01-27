#include <stdio.h>

int main() {
    float double radius, area;
    scanf("%lf", &radius);

    area = 3.14 * radius * radius;
    printf("Area: %.2lf", area);
    return 0;
}