#include <stdio.h>

int main() {
    double account;
    double interest;
    int day;

    printf("초기 자금: ");
    scanf("%lf", &account);
    printf("이자율: ");
    scanf("%lf", &interest);
    printf("일수: ");
    scanf("%d", &day);

    for(int i = 2; i <= day; i++) {
        account = account*(1+interest);
        printf("%d일의 금액: %lf\n", i,account);
    }
}