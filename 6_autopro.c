#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int answer;
    printf("------산수문제 자동 출력 시작------\n");
    while(1){
        int r1 = rand()%100;
        int r2 = rand()%100;
        printf("%d + %d = ",r1,r2);
        scanf("%d", &answer);
        if (answer == r1 + r2) {
            printf("정답입니다");
            break;
        }
        else
            printf("틀렸습니다\n");
    }

}