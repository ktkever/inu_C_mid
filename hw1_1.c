#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int decidewinner(int p1, int p2, int p3){
    if(((p3 == p2) && (p1 == p2)) || ((p1 != p2) && (p1 != p3) && (p2 != p3))) //무승부
        return 0;

    if(((p1 == 3) && (p2 == 2) && (p3 == p2))||         //p1 1등
        ((p1 == 2) && (p2 == 1) && (p3 == p2))||
        ((p1 == 1) && (p2 == 3) && (p3 == p2))) {
            return 1;
        }
        
    if(((p2 == 3) && (p1 == 2) && (p3 == p1))||         //p2 1등
        ((p2 == 2) && (p1 == 1) && (p3 == p1))||
        ((p2 == 1) && (p1 == 3) && (p3 == p1))) {
            return 2;
        }
    if(((p3 == 3) && (p2 == 2) && (p1 == p2))||         //p3 1등
        ((p3 == 2) && (p2 == 1) && (p1 == p2))||
        ((p3 == 1) && (p2 == 3) && (p1 == p2))) {
            return 3;
        }
}

int main() {
    srand(time(NULL));
    int com1, com2, user;
    int score_com1 = 0, score_com2 = 0, score_user = 0;
    int gamecount = 0;
    int game = 0;
    while(gamecount < 10) {
        printf("사용자 입력(가위:1 바위:2 보:3): ");
        scanf("%d",&user);
        com1 = rand()%3 + 1;
        com2 = rand()%3 + 1;
        printf("com1: %d / com2: %d / user: %d\n", com1, com2, user);
        
        int result = decidewinner(user, com1, com2);
        if(result == 0) 
            printf("비겼습니다\n");
        
        if(result == 1){        //user 1등, com1==com2
            while(com1 == com2){
                printf("비겼습니다\n");
                com1 = rand()%3+1;
                com2 = rand()%3+1;
                printf("com1: %d / com2: %d\n", com1, com2);
                game = 0;
            }
            if ((com1 == 2 && com2 == 1) ||(com1 == 3 && com2 == 2) || (com1 == 1 && com2 == 3)){
                printf("1등: 사용자 / 2등: 컴퓨터1 / 3등: 컴퓨터2\n");
                score_user += 3;
                score_com1 += 2;
                score_com2 += 1;
                gamecount++;
            }
            else{
                printf("1등: 사용자 / 2등: 컴퓨터2 / 3등: 컴퓨터1\n");
                score_user += 3;
                score_com1 += 1;
                score_com2 += 2;
                gamecount++;
            }
        }
        if(result == 2){        //com1 1등, user == com2
        while(user == com2){
            printf("비겼습니다\n");
            printf("사용자 입력(가위:1 바위:2 보:3): ");
            scanf("%d",&user);
            com2 = rand()%3+1;
            printf("com2: %d, user: %d\n", com2, user);
        }
            if((user == 1 && com2 == 3) || (user == 2 && com2 == 1) || (user == 3 && com2 == 2)){
                printf("1등: 컴퓨터1 / 2등: 사용자 / 3등: 컴퓨터2\n");
                score_user += 2;
                score_com1 += 3;
                score_com2 += 1;
                gamecount++;
                game = 0;
            }
            else{
                printf("1등: 컴퓨터1 / 2등: 컴퓨터2 / 3등: 사용자\n");
                score_user += 1;
                score_com1 += 3;
                score_com2 += 2;
                gamecount++;
                if(game == 0) game = 1;
                else if (game == 1) break;
            }
        }
        if(result == 3){        //com2 1등, com1 == user
            while(user == com1){
                printf("비겼습니다\n");
                printf("사용자 입력(가위:1 바위:2 보:3): ");
                scanf("%d",&user);
                com1 = rand()%3+1;
                printf("com2: %d / user: %d\n", com1, user);
            }
            if((user == 1 && com1 == 3) || (user == 2 && com1 == 1) || (user == 3 && com1 == 2)){
                printf("1등: 컴퓨터2 / 2등: 사용자 / 3등: 컴퓨터1\n");
                score_user += 2;
                score_com1 += 1;
                score_com2 += 3;
                gamecount++;
                game = 0;
            }
            else{
                printf("1등: 컴퓨터2 / 2등: 컴퓨터1 / 3등: 사용자\n");
                score_user += 1;
                score_com1 += 2;
                score_com2 += 3;
                gamecount++;
                if(game == 0) game = 1;
                else if(game == 1) break;
            }
        }
    }
    printf("-------최종 점수-------\n사용자: %d\ncom1: %d\ncom2: %d\n", score_user, score_com1, score_com2);
    printf("게임 횟수: %d", gamecount);
}