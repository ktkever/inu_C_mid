#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int player = 1;
    int x, y;
    if(player == 1){                    //플레이어 입력
        player = 0;
        printf("p");
    }

    else if(player == 0){
        printf("com");
    }
}