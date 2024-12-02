#include <stdio.h>

int main() {
    int money;

    printf("매달 저축 금액 입력:");
    scanf("%d", &money);
    
    int save = money * 12 * 30;
    
    printf("30년 후의 재산 %d", save);
}