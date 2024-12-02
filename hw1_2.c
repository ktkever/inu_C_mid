#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("사용자 입력: ");
    scanf("%d", &n);
    
    int limit = 0;
    for(int i = 1; i < n; i*=2){
        limit++;
    }

    for(int i = 0; i < limit; i++) {
        for(int j = pow(2,limit-1)-pow(2,i); j > 0; j--) {
            printf(" ");
        }
        for(int k = 1; k <= pow(2,i); k++) {
            printf("*");
        }
        printf("\n");
    }
}