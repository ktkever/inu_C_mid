#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define row 3
#define col 3
int main() {
    srand(time(NULL));

    int arr_A[row][col];
    int arr_B[row][col];
    int arr_C[row][col];
    int arr_D[row][col] = {0};

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            int element_a = rand()%10;
            arr_A[i][j] = element_a;
            int element_b = rand()%10;
            arr_B[i][j] = element_b;    
            arr_C[i][j] = arr_A[i][j] + arr_B[i][j];      //행렬 합
            }
        }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            for(int k = 0; k < col; k++){
                arr_D[i][j] += arr_A[i][k] * arr_B[k][j];
            }
        }
    }
    

    printf("A\n");
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("%d ", arr_A[i][j]);
        }
        printf("\n");
    }
    printf("\nB\n");
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("%d ", arr_B[i][j]);
        }
        printf("\n");
    }

    printf("\n행렬합: C\n");
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("%d ", arr_C[i][j]);
        }
        printf("\n");
    }

    printf("\n행렬곱: D\n");
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("%d ", arr_D[i][j]);
        }
        printf("\n");
    }
}
