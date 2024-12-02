#include <stdio.h>

int main() {
    int chulsuk[16] = {0};
    int class = 16;
    for(int i = 1; i <= class; i++){
        printf("%d번째 강의에 출석 하셨나요?: ",i);
        scanf("%d", &chulsuk[i-1]);
    }
    int sum = 0;
    for(int k = 0; k < class; k++)
        sum += chulsuk[k];

    double ratio = ((double)sum/16)*100;
    printf("출석률: %lf%%\n",ratio);
    
    if(ratio < 70.0)
        printf("수업 일수 부족");
}