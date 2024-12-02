#include <stdio.h>

int main() {
    int money;
    int price;
    int change;

    printf("투입금액: ");
    scanf("%d", &money);
    printf("물건 값:");
    scanf("%d",&price);
    change = money - price;
    printf("거스름돈: %d\n",change);
    
    int coin100s = change/100;
    change = change%100;
    printf("100원: %d, 10원: %d", coin100s,change);

}