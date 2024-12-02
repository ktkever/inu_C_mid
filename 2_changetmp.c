#include <stdio.h>

int main() {
    double f_degree;
    double c_degree;
    printf("화씨 입력: ");
    scanf("%lf",&f_degree);

    c_degree = (f_degree-32.0)*5/9;
    printf("섭씨 온도: %lf", c_degree);
}