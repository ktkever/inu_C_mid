#include <stdio.h>
#include <math.h>

int main() {
    double interest = 0.06;
    double money = 24.0;
    int day = 382;
    double amount = money*pow(1+interest, day);

    printf("%lf",amount);
    return 0;
}