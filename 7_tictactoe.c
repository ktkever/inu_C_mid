#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char board[3][3];
    int com_x, com_y;

    for(int i = 0; i < 3; i++){             //배열 초기화
        for(int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
    int player = 1;
    int x, y;
    for(int k = 0; k < 9; k++){
        if(player == 1){                    //플레이어 입력
            do{
                printf("플레이어 좌표입력(x,y): ");
                scanf("%d %d",&x, &y);
                player = 0;
            } while(board[y][x] != ' ');
            board[y][x] = 'X';
        }

        else if(player == 0){
            do{
                printf("com턴\n");
                com_x = rand() % 3;
                com_y = rand() % 3;
                player = 1;
            } while(board[com_y][com_x] != ' ');
            board[com_y][com_x] = 'O';
        }
        printf("---|---|---\n");

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf(" %c ",board[i][j]);
                if(j != 2) printf("|");
            }
            printf("\n");
            printf("---|---|---\n");
        }
        printf("\n");
    }
    
}