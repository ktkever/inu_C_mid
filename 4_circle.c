#define CRT_SECURE_NO_WARNING
#include <stdio.h>
#define pi 3.1415926536
int main() {
    float r;
    double A;
    printf("반지름 입력: ");
    scanf("%f", &r);
    
    A = r*r*pi;
    printf("원의 넓이: %lf", A);

}