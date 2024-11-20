#include <stdio.h>

int main(){
    int length = 10, width = 20;
    int perimeter = 2 * (length + width), area = length * width;
    
    printf("Chieu dai hinh chu nhat: %d\n", length);
    printf("Chieu rong hinh chu nhat: %d\n", width);
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
    printf("Dien tich hinh chu nhat: %d\n", area);

    return 0; 
}