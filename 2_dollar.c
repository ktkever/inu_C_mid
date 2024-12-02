#include <stdio.h>
#define EXCHANGE_RATE 1120

int main() {

    int dollar = 0;

    printf("달러화 금액 입력:");
    scanf("%d", &dollar);

    int won = dollar * EXCHANGE_RATE;
    printf("달러화 %d달러는 %d원 입니다.", dollar, won);
    
}