#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int stick_count = 12;
    int user_count, com_count;

    while(1) {      //do while가능, 조금더 효율적으로 가능
        printf("몇개의 스틱을 가져가겠습니까?: ");
        scanf("%d", &user_count);
        stick_count -= user_count;
        if(stick_count == 0) {
            printf("com 승리!");
            break;
        }
        
        com_count = rand()%3;
        printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", com_count);
        stick_count -= com_count;
        if(stick_count == 0) {
            printf("user 승리!");
            break;
        }

        printf("현재 스틱의 개수: %d\n",stick_count);
    }

}