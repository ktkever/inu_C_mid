#include <stdio.h>

int main()
{
    int a, b, c;

    printf("삼각형 세 변 입력: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a != 0 && b != 0 && c != 0){

        if(a+b > c && a+c > b && b+c > a){
            printf("유효한 삼각형");
        }

        else{
            printf("유효하지 않은 삼각형");
        }
    }
    else{
        printf("변의 길이는 0 보다 커야합니다");
    }
}