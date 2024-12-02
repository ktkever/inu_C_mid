#include <stdio.h>

int main() {
    int num;
    printf("정수 입력: ");
    scanf("%d",&num);
    for(int i = 1; i <= num; i++) {
        if(num % i == 0){
            printf("%d ",i);
        }
    }
    printf("\n");

    int j = 1;
    while(j <= num) {
        if(num % j == 0)
            printf("%d ",j);
        j++;
    }
}