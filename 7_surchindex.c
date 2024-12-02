#include <stdio.h>

int main(){
    int key;
    int arr[5] = {10,20,30,40,50};
    printf("탐색값 입력: ");
    scanf("%d", &key);

    int index = -1;
    for(int i = 0; i < 5; i++){
        if(key == arr[i]){
            printf("탐색 성공, 위치: %d",i);
            index = i;
            break;
        }
    }
    if(index == -1){
            printf("탐색에 실패하였습니다.");
        }
}