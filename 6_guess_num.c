#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int answer = rand()%100 + 1;
    int guess;
    int count = 1;

    do {
        printf("숫자 추측: ");
        scanf("%d", &guess);
        if (guess > answer) {
            printf("제시한 정수가 높습니다\n");

        }
        else if(guess < answer) {
            printf("제시한 정수가 낮습니다\n");
        }
        else {
            printf("정답입니다.\n");
            printf("시도 횟수: %d",count);
        }
        count++;
    } while (guess != answer);
    
}