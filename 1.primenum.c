#include <stdio.h>

int main() {
    int limit;
    int is_prime;
    printf("어디까지 찾을까요?: ");
    scanf("%d",&limit);

    for(int i = 2; i <= limit; i++) {
        is_prime = 1;
        for(int j = 2; j < i; j ++) {
            if(i % j == 0)
                is_prime = 0;
                break;
        }
        if(is_prime == 1){
            printf("%d ",i);
        }
    }    

}