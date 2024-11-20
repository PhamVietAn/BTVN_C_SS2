#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int sum = a + b, difference = a - b, product = a * b;
    float quotient;
    quotient = (float) a / b;
    printf("Tong cua %d va %d la: %d\n", a, b, sum);
    printf("Hieu cua %d va %d la: %d\n", a, b, difference);
    printf("Tich cua %d va %d la: %d\n", a, b, product);
    printf("Thuong cua %d va %d la: %f\n", a, b, quotient);

    return 0;
}   